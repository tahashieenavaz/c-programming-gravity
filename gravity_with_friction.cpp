#include <graphics.h>

#define WIDTH 600
#define HEIGHT 600
#define FRAMERATE 60
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
    
    float friction = 0.75;
    
    float ballMaxHeight = 20;
    
    // Animation Loop Started
    
    while (true)
    {
    	cleardevice();
	circle(ballPosition.x, ballPosition.y,20);
	ballPosition.x = ballPosition.x + dx;
	ballPosition.y = ballPosition.y + dy;
	dy = dy + GRAVITY;
	if(ballPosition.y > HEIGHT - 20){
		dy = -ballMaxHeight;
		ballMaxHeight = ballMaxHeight * friction;
	}
	// Used delay to give some sense of animation
	delay(1000/FRAMERATE);
    }
    
    return 0;
}
