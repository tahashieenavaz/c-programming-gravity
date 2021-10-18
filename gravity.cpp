#include <graphics.h>

#define WIDTH 600 // Canvas width
#define HEIGHT 600 // Canvas height
#define FRAMERATE 60 // delay(1000 / FRAMERATE)
#define FRICTION false // true || false
#define GRAVITY 1

int main() {
	struct cordinate{
		float x;
		float y;
	};
	struct cordinate ballPosition;
    initwindow(WIDTH, HEIGHT, "C Gravity!");
    cleardevice();
    
    // Position Ball at the center of canvas!
    
    ballPosition.x = WIDTH/2;
    ballPosition.y = HEIGHT/2;
    
    
	// Ball's velocity over horizontal & vertical axis
	// Used floats over integers for smoother movements
	
	float dx = 0;
    float dy = .25;
    
    float friction = .85;
    float ballMaxHeight = 20;
    
    // Animation Loop Started
    
    while (true)
    {
    	cleardevice();
    setfillstyle(SOLID_FILL, RED);
    setcolor(WHITE);
    fillellipse(ballPosition.x, ballPosition.y, 20, 20);
	ballPosition.x = ballPosition.x + dx;
	ballPosition.y = ballPosition.y + dy;
	dy = dy + GRAVITY;
	if(ballPosition.y > HEIGHT - 20){
		dy = -ballMaxHeight;
		// Put friction factor into the game if associated constant says to
		if(FRICTION){
			ballMaxHeight  = ballMaxHeight * friction;
		}
	}
	// Used delay to give some sense of animation
	delay(1000/FRAMERATE);
    }
    
    return 0;
}
