#include "weapon.h"
#include "char.h"

//get_Attack(){ return Attack;}
void Weapon::GetmPosX(){ return mPosX;}
void Weapon::GetmPosY(){ return mPosY;}
void Weapon::SetPosX(int NewmPosX){ mPosX = NewmPosX;}
void Weapon::SetPosY(int NewmPosY){ mPosY = NewmPosY; }

Weapon::Weapon(){                          //��l�ƪ��y�Эn��H���b�P�Ӧ�m -------------------------main
	mPosX = mposX;
	mPosY = mposY;
}


void MeleeWeapon::render(){
    //Show the dot
	gMeleeWeaponTexture.render( GetmPosX(), GetmPosY() );   //�쪩gDotTexture.render( mPosX, mPosY ); �|����W�� gMeleeWeapon.render( mPosX, mPosY );
}


void RangedWeapon::render(){
	gRangedWeaponTexture.render( GetmPosX(), GetmPosY() );//�|����W�� gRangedWeapon.render( mPosX, mPosY );
}

//--------------------------------------------------------------------------SDL

void Weapon::ChangePositionWithCharacter(Engineer& character){ //�C��H�����ʨ�@�ӷs��m�A�N�I�s�o�Ө�Ƨ��Z���y�ШϨ�P�H�����s�y�ЬۦP ----------main
	SetPosX(character.GetmPosX());
	SetPosY(character.GetmPosY());
}

MeleeWeapon::MeleeWeapon(int id, int damage){ //��ԪZ�������O����l�ƬO�� main��ʿ�J -----------------------------------main
	ID = id;
	Damage = damage;
}
void MeleeWeapon::GetDamage(){return Damage;}





RangedWeapon::RangedWeapon(int id){ID = id;}//��l�ƻ��{�Z��




/*

				int IDcounter = 0; //global variable
				while( SDL_PollEvent( &e ) != 0 )
				{
					//User requests quit
					if( e.type == SDL_QUIT )
					{
						quit = true;
					}
					//User presses a key
					else if( e.type == SDL_KEYDOWN )
					{
						//Select surfaces based on key press
						switch( e.key.keysym.sym )
						{
							case SDLK_SPACE://�����Z�� 
							IDcounter++;
							if(IDcounter>1){
								IDcounter = 0; //�C���@���ťիتZ��IDcounter+1,IDcounter�Ȭ��Z���b�}�C�����쪺index�ȡA�j��1���ɭ� IDcounter�k�s 
							}
							break;

						}
					}
				}
				//�C����i������ɡA���|�I�s�o��attack function
					AttackMonsterByMeleeWeapon(Monster& monster){ 
						monster.HP -= SelfArmory[0].GetDamage;
					}//�o�Ө�ƬO�M������ԪZ���ϥΡA�]�����{�Z���y���������覡�O�z�L�l�u�����A�Ӥ��O���{�Z������  
					
					//�H���}�l����(mouse event) (���U�ƹ� )    //�����Ҽ{���C���ʵe 
					case  ���U���� :
					 
						if(IDcounter == 0 && ��ԪZ���P�ĤH���|(�ݦҼ{�Z����pixel�e�M�Ǫ���pixel�e)){ //��ܥثe��ܪ�ԪZ�� 
							AttackMonsterByMeleeWeapon(Monster& monster);//-------------------------------------------�ثe���D:�{���n��򪾹D�ڭn�������O�����Ǫ� ?
						}
						else if(IDcounter == 1){
							//��ܥثe��ܻ��{�Z�� �A�åB�o�g�l�u 
							//------�o�g�l�u��function�A�o�g���l�u������N�P���{�Z���L���F
							//�ЫذʺA�l�u����A 
							Bullet
							
						}
		
/*
				
				
				
				
				
				

