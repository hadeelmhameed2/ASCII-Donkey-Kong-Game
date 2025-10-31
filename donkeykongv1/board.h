#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <cstring>
#include "utils.h" 




class board {


	static constexpr int MAX_X = 80;
	static constexpr int MAX_Y = 25;


	char currentBoard[MAX_Y][MAX_X + 1];
	char currentScreen[MAX_Y][MAX_X + 1];
	const char* gameBoard[MAX_Y] = {

	  "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ",
	  "Q                                                                              Q",
	  "Q    Life :                                     $                              Q",
	  "Q                                           =========                          Q",
	  "Q                                               H                              Q",
	  "Q                                               H                              Q",
	  "Q                                               H     &                        Q",
	  "Q                         <<<<<<<<<<<<<<<<<<<<<<<<<<<<<                        Q",
	  "Q                             H                                                Q",
	  "Q                             H                                                Q",
	  "Q                             H                                                Q",
	  "Q                   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>               Q",
	  "Q                                                    H                         Q",
	  "Q                                                    H                         Q",
	  "Q                                                    H                         Q",
	  "Q             <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<        Q",
	  "Q                      H                                                       Q",
	  "Q                      H                                                       Q",
	  "Q                      H                                                       Q",
	  "Q             >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>       Q",
	  "Q                                                            H                 Q",
	  "Q                                                            H                 Q",
	  "Q                                                            H                 Q",
	  "Q==============================================================================Q",
	  "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ"
	};
	const char* winBoard[MAX_Y] = {

		 "################################################################################",
		 "#==============================================================================#",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                   ||    You Completed all the stages     ||                  #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                              Your Score:                                     #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                        Press ESC to go back to the menu                      #",
		 "#                                                                              #",
		 "#==============================================================================#",
		 "################################################################################"
	};

	const char* scoreBoard[MAX_Y] = {

		 "################################################################################",
		 "#==============================================================================#",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                            ||  SCORE BOARD  ||                               #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                        Press ESC to go back to the menu                      #",
		 "#                                                                              #",
		 "#==============================================================================#",
		 "################################################################################"
	};

	const char* screenErrorBoard[MAX_Y] = {

		 "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ",
		 "Q==============================================================================Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                            Screen #  is not good                             Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                      Press ENTER to go to the next stage                     Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q                                                                              Q",
		 "Q==============================================================================Q",
		 "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ"
	};

	const char* loseBoard[MAX_Y] = {
			  "################################################################################",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                         ##   #   #   #  ###                                  #",
			  "#                        #    # #  ## ##  #                                    #",
			  "#                        # #  ###  # # #  ##                                   #",
			  "#                        # #  # #  #   #  #                                    #",
			  "#                         ##  # #  #   #  ###                                  #",
			  "#                                                                              #",
			  "#                                    #   # #  ###   ##       #                 #",
			  "#                                   # #  # #  #     # #      #                 #",
			  "#                                   # #  # #  ##    ##       #                 #",
			  "#                                   # #   #   #     # #                        #",
			  "#                                    #    #   ###   # #      #                 #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                 - Press any key to return to the main menu.                  #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "#                                                                              #",
			  "################################################################################" };

	const char* manuBoard[MAX_Y] = {
		  "################################################################################",
		  "#                              #                 #                             #",
		  "#                             #  #              # #                            #",
		  "#                            #   DonkeyKong Menu   #                           #",
		  "#                             #    #############  #                            #",
		  "#                              # #              ##                             #",
		  "#                                                                              #",
		  "#                         Press 1 - Start a new game                           #",
		  "#                         Press 2 - Select A Level                             #",
		  "#                         Press 3 - Score Board                                #",
		  "#                         Press 8 - Instructions                               #",
		  "#                         Press 9 - Exist                                      #",
		  "#                                                                              #",
		  "#                      ##   #   # #  ###     #   #  ####    #                  #",
		  "#                     #    # #  # #  #       ## ##  #       #                  #",
		  "#                      #   ###  # #  ##      # # #  ##      #                  #",
		  "#                       #  # #   #   #       #   #  #                          #",
		  "#                     ##   # #   #   ###     #   #  ####    #                  #",
		  "#          O      O                                                            #",
		  "#        ##########           $  &                ##########                   #",
		  "#             H      O      ##########                H        O               #",
		  "#             H               H                       H    ########            #",
		  "#      @      H ##########    H                       H       H                #",
		  "#             H      H        H                       H       H                #",
		  "################################################################################"
	};


	const char* guideBoard[MAX_Y] = {
		  "################################################################################",
		  "#                                                                              #",
		  "#                           ### INSTRUCTIONS ###                               #",
		  "#                                                                              #",
		  "#                          How to Play Donkey Kong:                            #",
		  "#                                                                              #",
		  "#                                                                              #",
		  "#    - The objective is to navigate your character to the top of the screen,   #",
		  "#      avoiding barrels and other obstacles, to rescue the princess.           #",
		  "#    - Use the keys below to control your character.                           #",
		  "#                                                                              #",
		  "#                                CONTROLS:                                     #",
		  "#                             A - Move Left                                    #",
		  "#                             D - Move Right                                   #",
		  "#                             W - Jump / Move Up                               #",
		  "#                             X - Move Down                                    #",
		  "#                             S - Stay in Place                                #",
		  "#                                                                              #",
		  "#                                                                              #",
		  "#     - Avoid barrels by jumping over them or moving out of their path.        #",
		  "#     - Climb ladders to progress to the next level.                           #",
		  "#     - Time your moves carefully to avoid falling or getting hit by obstacles #",
		  "#                                                                              #",
		  "#                          Good luck and have fun!                             #",
		  "################################################################################"
	};

	const char* chooseScreenBoard[MAX_Y] = {

		 "################################################################################",
		 "#==============================================================================#",
		 "#                                                                              #",
		 "#          ----   Choose a Screen by Typing the screen number   ----           #",
		 "#                         And then pressing ENTER                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                       Enter 0 to go back to the Menu                         #",
		 "#                                                                              #",
		 "#==============================================================================#",
		 "################################################################################"
	};

	const char* noFilesErrorBoard[MAX_Y] = {

		 "################################################################################",
		 "#==============================================================================#",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                      ||    Screen File is empty    ||                        #",
		 "#                                                                              #",
		 "#                         Add files in order to play                           #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                        Press ESC to return to the Menu                       #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#                                                                              #",
		 "#==============================================================================#",
		 "################################################################################"
	};


public:


	void setScoreBoard();


	int chooseScreen(std::vector<std::string> const, const int sumOfFiles);


	void changePixelInCurrBoard(Pos pos, char ch) {

		currentBoard[pos.y][pos.x] = ch;
	}

	void changePixelInScreen(Pos pos, char ch) {

		currentScreen[pos.y][pos.x] = ch;
	}

	void setMenu();


	void setGame();


	void setGuide();


	void setLose();


	void setWin();


	void setChooseScreen();

	void setScreenError();

	void setNoFilesError();

	bool setScreen(int i);

	bool isScreenOk(int i);


	void print() const;


	char getCharFromCurrentBoard(int x, int y) const {
		return currentBoard[y][x];
	}


	char getCharFromOriginalScreen(int x, int y) const {
		return currentScreen[y][x];
	}

	Pos searchChar(char ch) const;

	void fixBoard();

	void fixChar(char c);

	void fixGhosts();

	std::vector<Pos> getGhostsLocations();

	int getColorForCharacter(char character) const;

};

