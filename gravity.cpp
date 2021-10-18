#include <graphics.h>

#define WIDTH 600
#define HEIGHT 600
#define FRAMERATE 60

int main( )
{
	struct cordinate{
		float x;
		float y;
	};
	struct cordinate ballPosition;
    initwindow(WIDTH, HEIGHT, "C Gravity!");
    cleardevice();
    ballPosition.x = WIDTH/2;
    ballPosition.y = HEIGHT/2;
    
    float dx = 0;
    float dy = .25;
    float gravity = 1;
    
    while (true)
    {
    	cleardevice();
	circle(ballPosition.x, ballPosition.y,20);
	ballPosition.x = ballPosition.x + dx;
	ballPosition.y = ballPosition.y + dy;
	dy = dy + gravity;
	if(ballPosition.y > HEIGHT - 20){
		dy = -20;
	}
	
	delay(1000/FRAMERATE);
    }
    
    
    return 0;
}
