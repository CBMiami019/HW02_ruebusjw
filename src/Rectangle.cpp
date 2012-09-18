#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"
#include "cinder/Vector.h"
#include "Rectangle.h"


using namespace ci;
using namespace ci::app;
using namespace std;

Rectangle::Rectangle(int depth, ci::Vec2f position, ci::Vec2f offset, float radius){

	next_P=prev_P=this;
	position_ = position;
	offset_ = offset;
	radius_=radius;
	

}

void insertAfter(Rectangle* r1, Rectangle* r2){
}

/*
void insertAfter(Rectangle* therect, Rectangle* newItem)){
	newItem->next_P = where->next_P;
	newItem->prev_P = where;
	where->next_P->prev_P = newItem;
	where->next_P = newItem;
}*/

void draw(ci::Vec2i mouse_pos){


}
