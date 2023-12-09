#include "char.h"
#include "weapon.h"

//    Weapon p = Weapon(0,20,00);
//    Weapon q = Weapon(0,10,00);

Dot::Dot() 
	 :HP(200), Energy(120)
{
    //Initialize the offsets
    mPosX = 0;
    mPosY = 0;

    //Initialize the velocity
    mVelX = 0;
    mVelY = 0;
    

    Weapon SelfArmory[0] = new//武器一 
    Weapon SelfArmory[1] = //武器二 
}

Dot::Dot() 
	 :HP(150), Energy(150)
{
    //Initialize the offsets
    mPosX = 0;
    mPosY = 0;

    //Initialize the velocity
    mVelX = 0;
    mVelY = 0;
    Weapon SelfArmory[0] = //武器一 
    Weapon SelfArmory[1] = //武器二
}

Dot::Dot() 
	 :HP(100), Energy(200)
{
    //Initialize the offsets
    mPosX = 0;
    mPosY = 0;

    //Initialize the velocity
    mVelX = 0;
    mVelY = 0;
    Weapon SelfArmory[0] = //武器一 
    Weapon SelfArmory[1] = //武器二
}

//main 會根據選取的人物去呼叫對應的constructor 



void Dot::handleEvent( SDL_Event& e )
{
    //If a key was pressed
	if( e.type == SDL_KEYDOWN && e.key.repeat == 0 )
    {
        //Adjust the velocity
        switch( e.key.keysym.sym )
        {
            case SDLK_s: mVelY -= DOT_VEL; break;
            case SDLK_w: mVelY += DOT_VEL; break;
            case SDLK_a: mVelX -= DOT_VEL; break;
            case SDLK_d: mVelX += DOT_VEL; break;//                             motion主程式中鍵盤操作的上下左右記得也要換wads 
        }
    }
    //If a key was released
    else if( e.type == SDL_KEYUP && e.key.repeat == 0 )
    {
        //Adjust the velocity
        switch( e.key.keysym.sym )
        {
            case SDLK_w: mVelY += DOT_VEL; break;
            case SDLK_s: mVelY -= DOT_VEL; break;
            case SDLK_a: mVelX += DOT_VEL; break;
            case SDLK_d: mVelX -= DOT_VEL; break;
        }
    }
}


void Dot::move()
{
    //Move the dot left or right
    mPosX += mVelX;

    //If the dot went too far to the left or right
    if( ( mPosX < 0 ) || ( mPosX + DOT_WIDTH > SCREEN_WIDTH ) )
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

void Dot::render()
{
    //Show the dot
	gDotTexture.render( mPosX, mPosY );
}
           
		   
		   
		   
		                                                                                                                                                                                                                                                                               
//EE_sophomore::





