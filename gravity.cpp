#include <graphics.h>

#define WIDTH 600
#define HEIGHT 600
#define FRAMERATE 60

int main( )
{
	struct cordinate{
		int x;
		int y;
	};
	struct cordinate circlePosition;
	circlePosition.x = 50;
    initwindow(WIDTH, HEIGHT, "C Gravity!");
    cleardevice();
    float x = WIDTH/2;
    float y = HEIGHT/2;
    
    float dx = 0;
    float dy = .25;
    float gravity = 1;
    
    while (true)
    {
    	cleardevice();
		circle(x, y,20);
		x = x + dx;
		y = y + dy;
		dy = dy + gravity;
		if(y > HEIGHT - 20){
			dy = -20;
		}
		
		delay(1000/FRAMERATE);
    }
    
    
    return 0;
}
