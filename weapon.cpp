#include "weapon.h"
#include "char.h"

//get_Attack(){ return Attack;}
void Weapon::GetmPosX(){ return mPosX;}
void Weapon::GetmPosY(){ return mPosY;}
void Weapon::SetPosX(int NewmPosX){ mPosX = NewmPosX;}
void Weapon::SetPosY(int NewmPosY){ mPosY = NewmPosY; }

Weapon::Weapon(){                          //初始化的座標要跟人物在同個位置 -------------------------main
	mPosX = mposX;
	mPosY = mposY;
}


void MeleeWeapon::render(){
    //Show the dot
	gMeleeWeaponTexture.render( GetmPosX(), GetmPosY() );   //原版gDotTexture.render( mPosX, mPosY ); 尚未改名成 gMeleeWeapon.render( mPosX, mPosY );
}


void RangedWeapon::render(){
	gRangedWeaponTexture.render( GetmPosX(), GetmPosY() );//尚未改名成 gRangedWeapon.render( mPosX, mPosY );
}

//--------------------------------------------------------------------------SDL

void Weapon::ChangePositionWithCharacter(Engineer& character){ //每當人物移動到一個新位置，就呼叫這個函數更改武器座標使其與人物的新座標相同 ----------main
	SetPosX(character.GetmPosX());
	SetPosY(character.GetmPosY());
}

MeleeWeapon::MeleeWeapon(int id, int damage){ //近戰武器攻擊力的初始化是由 main手動輸入 -----------------------------------main
	ID = id;
	Damage = damage;
}
void MeleeWeapon::GetDamage(){return Damage;}





RangedWeapon::RangedWeapon(int id){ID = id;}//初始化遠程武器




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
							case SDLK_SPACE://切換武器 
							IDcounter++;
							if(IDcounter>1){
								IDcounter = 0; //每按一次空白建武器IDcounter+1,IDcounter值為武器在陣列對應到的index值，大於1的時候 IDcounter歸零 
							}
							break;

						}
					}
				}
				//每當角色進行攻擊時，都會呼叫這個attack function
					AttackMonsterByMeleeWeapon(Monster& monster){ 
						monster.HP -= SelfArmory[0].GetDamage;
					}//這個函數是專門給近戰武器使用，因為遠程武器造成攻擊的方式是透過子彈攻擊，而不是遠程武器本身  
					
					//人物開始攻擊(mouse event) (按下滑鼠 )    //先不考慮揮劍的動畫 
					case  按下左鍵 :
					 
						if(IDcounter == 0 && 近戰武器與敵人重疊(需考慮武器的pixel寬和怪物的pixel寬)){ //表示目前選擇近戰武器 
							AttackMonsterByMeleeWeapon(Monster& monster);//-------------------------------------------目前問題:程式要怎麼知道我要攻擊的是哪隻怪物 ?
						}
						else if(IDcounter == 1){
							//表示目前選擇遠程武器 ，並且發射子彈 
							//------發射子彈的function，發射完子彈後攻擊就與遠程武器無關了
							//創建動態子彈物件， 
							Bullet
							
						}
		
/*
				
				
				
				
				
				

