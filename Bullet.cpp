#include "Bullet.h"
#include "weapon.h"
Bullet::Bullet(int mvelX,int mvelY, int damage){
	mPosX = Weapon.Get_mPosX();
	mPosY = Weapon.Get_mPosY();
	mVelX = mvelX;
	mVelY = mvelY;
	Damage = damage;
}

void Bullet::move()
{
    //Move the dot left or right
    mPosX += mVelX;

    //If the dot went too far to the left or right
    if( ( mPosX < 0 ) || ( mPosX + DOT_WIDTH > SCREEN_WIDTH ) )                  //邊界改成我們的地圖邊界 
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
	gBulletTexture.render( mPosX, mPosY );
}
