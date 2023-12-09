#include "Bullet.h"
#include "weapon.h"
Bullet::Bullet(){
	mPosX = Weapon.Get_mPosX();
	mPosY = Weapon.Get_mPosY();
	mVelX = 5;
	mVelY = 5;
}

void Bullet::move()
{
    //Move the dot left or right
    mPosX += mVelX;

    //If the dot went too far to the left or right
    if( ( mPosX < 0 ) || ( mPosX + DOT_WIDTH > SCREEN_WIDTH ) )                  //��ɧ令�ڭ̪��a����� 
    {
        //Move back
        mPosX -= mVelX;
    }

    //Move the dot up or down
    mPosY += mVelY;

    //If the dot went too far up or down
    if( ( mPosY < 0 ) || ( mPosY + DOT_HEIGHT > SCREEN_HEIGHT ) )
    {
        //Move back
        mPosY -= mVelY;
    }
}

void Bullet::render()
{
    //Show the dot
	gDotTexture.render( mPosX, mPosY );
}
