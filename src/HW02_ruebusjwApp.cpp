#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Rectangle.h"



using namespace ci;
using namespace ci::app;
using namespace std;


class HW02_ruebusjw : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private:
	Surface* mySurface_; 
	static const int width=800;
	static const int height=600; 
	static const int size=1024; 

	int frameNumber;



};


void HW02_ruebusjw::setup()
{
	mySurface_ = new Surface(size,size,false);
	frameNumber=0;
	
}

void HW02_ruebusjw::mouseDown( MouseEvent event )		
{														
	uint8_t* pixArray = (*mySurface_).getData();		
	int x1, y1;											
	x1 = event.getX();
	y1 = event.getY();
	drawCircle(x1,y1,50,pixArray);
}


void HW02_ruebusjw::update()
{
	uint8_t* pixArray = (*mySurface_).getData();
	//drawRect(100,125,5,125,pixArray);
	//drawCircle(400,400,50,pixArray);
	//blur(pixArray);

	frameNumber++;
}

void HW02_ruebusjw::draw()
{
	gl::draw(*mySurface_);
}

CINDER_APP_BASIC( HW02_ruebusjw, RendererGl )
