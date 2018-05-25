/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/OpenGL.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Network.h>
#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/Graphics/Export.h>

int main(int argc, char const *argv[])
{
    	sfVideoMode mode = {500,725, 32};
    	sfRenderWindow* window;
    	sfTexture* texture;
    	sfSprite *sprite;
    	sfImage *image;
    	sfEvent event;
    	sfFont *font;
        sfColor gris = {230, 234, 236, 255};
    	sfVector2f size_rect = {85, 85};
    	char *resultat;
        int state = 0;
    	resultat = "";
    	char	*add_to_res(char *res, char *k, int state);
    	char	*rem_to_res(char *res);
    	void	*clean_res(char *res);

    	//BARRE D'AFFICHAGE
    	sfRectangleShape *display_rect;
    	sfVector2f size_display = {460, 80};
    	sfVector2f position_display = {20, 10};
    	display_rect = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(display_rect, sfWhite);
    	sfRectangleShape_setSize(display_rect, size_display);
    	sfRectangleShape_setPosition(display_rect, position_display);
    	//BARRE D'AFFICHAGE

    	//7
    	sfRectangleShape *rect7;
    	sfVector2f position_rect7 = {20, 120};
    	rect7 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect7, sfWhite);
    	sfRectangleShape_setSize(rect7, size_rect);
    	sfRectangleShape_setPosition(rect7, position_rect7);
    	//7

    	//8
    	sfRectangleShape *rect8;
    	sfVector2f position_rect8 = {145, 120};
    	rect8 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect8, sfWhite);
    	sfRectangleShape_setSize(rect8, size_rect);
    	sfRectangleShape_setPosition(rect8, position_rect8);
    	//8

    	//9
    	sfRectangleShape *rect9;
    	sfVector2f position_rect9 = {270, 120};
    	rect9 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect9, sfWhite);
    	sfRectangleShape_setSize(rect9, size_rect);
    	sfRectangleShape_setPosition(rect9, position_rect9);
    	//9

    	//mult
    	sfRectangleShape *rectmult;
    	sfVector2f position_rectmult = {395, 120};

    	rectmult = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectmult, sfWhite);
    	sfRectangleShape_setSize(rectmult, size_rect);
    	sfRectangleShape_setPosition(rectmult, position_rectmult);
    	//mult

    	//4
    	sfRectangleShape *rect4;
    	sfVector2f position_rect4 = {20, 245};

    	rect4 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect4, sfWhite);
    	sfRectangleShape_setSize(rect4, size_rect);
    	sfRectangleShape_setPosition(rect4, position_rect4);
    	//4

    	//5
    	sfRectangleShape *rect5;
    	sfVector2f position_rect5 = {145, 245};

    	rect5 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect5, sfWhite);
    	sfRectangleShape_setSize(rect5, size_rect);
    	sfRectangleShape_setPosition(rect5, position_rect5);
    	//5

    	//6
    	sfRectangleShape *rect6;
    	sfVector2f position_rect6 = {270, 245};

    	rect6 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect6, sfWhite);
    	sfRectangleShape_setSize(rect6, size_rect);
    	sfRectangleShape_setPosition(rect6, position_rect6);
    	//6

    	//div
    	sfRectangleShape *rectd;
    	sfVector2f position_rectd = {395, 245};
    	rectd = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectd, sfWhite);
    	sfRectangleShape_setSize(rectd, size_rect);
    	sfRectangleShape_setPosition(rectd, position_rectd);
    	//div

    	//1
    	sfRectangleShape *rect1;
    	sfVector2f position_rect1 = {20, 370};
    	rect1 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect1, sfWhite);
    	sfRectangleShape_setSize(rect1, size_rect);
    	sfRectangleShape_setPosition(rect1, position_rect1);
    	//1

    	//2
    	sfRectangleShape *rect2;
    	sfVector2f position_rect2 = {145, 370};
    	rect2 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect2, sfWhite);
    	sfRectangleShape_setSize(rect2, size_rect);
    	sfRectangleShape_setPosition(rect2, position_rect2);
    	//2

    	//3
    	sfRectangleShape *rect3;
    	sfVector2f position_rect3 = {270, 370};
    	rect3 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect3, sfWhite);
    	sfRectangleShape_setSize(rect3, size_rect);
    	sfRectangleShape_setPosition(rect3, position_rect3);
    	//3

    	//modulo
    	sfRectangleShape *rectmod;
    	sfVector2f position_rectmod = {395, 370};
    	rectmod = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectmod, sfWhite);
    	sfRectangleShape_setSize(rectmod, size_rect);
    	sfRectangleShape_setPosition(rectmod, position_rectmod);
    	//modulo

    	//min
    	sfRectangleShape *rectmin;
    	sfVector2f position_rectmin = {20, 495};
    	rectmin = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectmin, sfWhite);
    	sfRectangleShape_setSize(rectmin, size_rect);
    	sfRectangleShape_setPosition(rectmin, position_rectmin);
    	//min

    	//0
    	sfRectangleShape *rect0;
    	sfVector2f position_rect0 = {145, 495};
    	rect0 = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rect0, sfWhite);
    	sfRectangleShape_setSize(rect0, size_rect);
    	sfRectangleShape_setPosition(rect0, position_rect0);
    	//0

    	//add
    	sfRectangleShape *recta;
    	sfVector2f position_recta = {270, 495};
    	recta = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(recta, sfWhite);
    	sfRectangleShape_setSize(recta, size_rect);
    	sfRectangleShape_setPosition(recta, position_recta);
    	//add

    	//res
    	sfRectangleShape *rectres;
    	sfVector2f position_rectres = {395, 495};
    	rectres = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectres, sfWhite);
    	sfRectangleShape_setSize(rectres, size_rect);
    	sfRectangleShape_setPosition(rectres, position_rectres);
    	//res

    	//op. par.
    	sfRectangleShape *rectoppar;
    	sfVector2f position_rectoppar = {20, 620};
    	rectoppar = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectoppar, sfWhite);
    	sfRectangleShape_setSize(rectoppar, size_rect);
    	sfRectangleShape_setPosition(rectoppar, position_rectoppar);
    	//op. par.

    	//eff.
    	sfRectangleShape *recteff;
    	sfVector2f position_recteff = {145, 620};
    	recteff = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(recteff, sfWhite);
    	sfRectangleShape_setSize(recteff, size_rect);
    	sfRectangleShape_setPosition(recteff, position_recteff);
    	//eff.

    	//cl. par.
    	sfRectangleShape *rectclpar;
    	sfVector2f position_rectclpar = {270, 620};
    	rectclpar = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectclpar, sfWhite);
    	sfRectangleShape_setSize(rectclpar, size_rect);
    	sfRectangleShape_setPosition(rectclpar, position_rectclpar);
    	//cl. par.

    	//C
    	sfRectangleShape *rectc;
    	sfVector2f position_rectc = {395, 620};
    	rectc = sfRectangleShape_create();
    	sfRectangleShape_setFillColor(rectc, sfWhite);
    	sfRectangleShape_setSize(rectc, size_rect);
    	sfRectangleShape_setPosition(rectc, position_rectc);
    	//C

  	font = sfFont_createFromFile("font.ttf");
    	if (!font)
            font = sfFont_createFromFile("./bonus/font.ttf");
            if(!font)
        	   return 84;
    	
    	//TEXTE BOUTTON 7
    	sfText *text7;
    	sfVector2f position_text7 = {45, 140};
    	text7 = sfText_create();
    	sfText_setPosition(text7, position_text7);
    	sfText_setString(text7, "7");
    	sfText_setColor(text7, sfBlack);
    	sfText_setCharacterSize(text7, 50);
    	sfText_setFont(text7, font);
    	//

    	//TEXTE BOUTTON 8
    	sfText *text8;
    	sfVector2f position_text8 = {170, 140};
    	text8 = sfText_create();
    	sfText_setPosition(text8, position_text8);
    	sfText_setString(text8, "8");
    	sfText_setColor(text8, sfBlack);
    	sfText_setCharacterSize(text8, 50);
    	sfText_setFont(text8, font);
    	//

    	//TEXTE BOUTTON 9
    	sfText *text9;
    	sfVector2f position_text9 = {295, 140};
    	text9 = sfText_create();
    	sfText_setPosition(text9, position_text9);
    	sfText_setString(text9, "9");
    	sfText_setColor(text9, sfBlack);
    	sfText_setCharacterSize(text9, 50);
    	sfText_setFont(text9, font);
    	//

    	//TEXTE BOUTTON MULTIPLIER
    	sfText *textmult;
    	sfVector2f position_textmult = {427, 150};
    	textmult = sfText_create();
    	sfText_setPosition(textmult, position_textmult);
    	sfText_setString(textmult, "*");
    	sfText_setColor(textmult, sfBlack);
    	sfText_setCharacterSize(textmult, 50);
    	sfText_setFont(textmult, font);
    	//

    	//TEXTE BOUTTON 4
    	sfText *text4;
    	sfVector2f position_text4 = {45, 265};
    	text4 = sfText_create();
    	sfText_setPosition(text4, position_text4);
    	sfText_setString(text4, "4");
    	sfText_setColor(text4, sfBlack);
    	sfText_setCharacterSize(text4, 50);
    	sfText_setFont(text4, font);
    	//

    	//TEXTE BOUTTON 5
    	sfText *text5;
    	sfVector2f position_text5 = {170, 265};
    	text5 = sfText_create();
    	sfText_setPosition(text5, position_text5);
    	sfText_setString(text5, "5");
    	sfText_setColor(text5, sfBlack);
    	sfText_setCharacterSize(text5, 50);
    	sfText_setFont(text5, font);
    	//

    	//TEXTE BOUTTON 6
    	sfText *text6;
    	sfVector2f position_text6 = {295, 265};
    	text6 = sfText_create();
    	sfText_setPosition(text6, position_text6);
    	sfText_setString(text6, "6");
    	sfText_setColor(text6, sfBlack);
    	sfText_setCharacterSize(text6, 50);
    	sfText_setFont(text6, font);
    	//

    	//TEXTE BOUTTON DIVIER
    	sfText *textd;
    	sfVector2f position_textd = {427, 265};
    	textd = sfText_create();
    	sfText_setPosition(textd, position_textd);
    	sfText_setString(textd, "/");
    	sfText_setColor(textd, sfBlack);
    	sfText_setCharacterSize(textd, 50);
    	sfText_setFont(textd, font);
    	//

    	//TEXTE BOUTTON 1
    	sfText *text1;
    	sfVector2f position_text1 = {45, 390};
    	text1 = sfText_create();
    	sfText_setPosition(text1, position_text1);
    	sfText_setString(text1, "1");
    	sfText_setColor(text1, sfBlack);
    	sfText_setCharacterSize(text1, 50);
    	sfText_setFont(text1, font);
    	//

    	//TEXTE BOUTTON 2
    	sfText *text2;
    	sfVector2f position_text2= {170, 390};
    	text2= sfText_create();
    	sfText_setPosition(text2, position_text2);
    	sfText_setString(text2, "2");
    	sfText_setColor(text2, sfBlack);
    	sfText_setCharacterSize(text2, 50);
    	sfText_setFont(text2, font);
    	//

    	//TEXTE BOUTTON 3
    	sfText *text3;
    	sfVector2f position_text3 = {295, 390};
    	text3 = sfText_create();
    	sfText_setPosition(text3, position_text3);
    	sfText_setString(text3, "3");
    	sfText_setColor(text3, sfBlack);
    	sfText_setCharacterSize(text3, 50);
    	sfText_setFont(text3, font);
    	//

    	//TEXTE BOUTTON MODULO
    	sfText *textmod;
    	sfVector2f position_textmod = {410, 390};
    	textmod = sfText_create();
    	sfText_setPosition(textmod, position_textmod);
    	sfText_setString(textmod, "%");
    	sfText_setColor(textmod, sfBlack);
    	sfText_setCharacterSize(textmod, 50);
    	sfText_setFont(textmod, font);
    	//

    	//TEXTE BOUTTON SOUSTRAIRE
    	sfText *textmin;
    	sfVector2f position_textmin = {52, 507};
    	textmin = sfText_create();
    	sfText_setPosition(textmin, position_textmin);
    	sfText_setString(textmin, "-");
    	sfText_setColor(textmin, sfBlack);
    	sfText_setCharacterSize(textmin, 50);
    	sfText_setFont(textmin, font);
    	//

    	//TEXTE BOUTTON 0
    	sfText *text0;
    	sfVector2f position_text0= {170, 515};
    	text0= sfText_create();
    	sfText_setPosition(text0, position_text0);
    	sfText_setString(text0, "0");
    	sfText_setColor(text0, sfBlack);
    	sfText_setCharacterSize(text0, 50);
    	sfText_setFont(text0, font);
    	//

    	//TEXTE BOUTTON AJOUTER
    	sfText *textadd;
    	sfVector2f position_textadd = {295, 510};
    	textadd = sfText_create();
    	sfText_setPosition(textadd, position_textadd);
    	sfText_setString(textadd, "+");
    	sfText_setColor(textadd, sfBlack);
    	sfText_setCharacterSize(textadd, 50);
    	sfText_setFont(textadd, font);
    	//

    	//TEXTE BOUTTON EGALE
    	sfText *textres;
    	sfVector2f position_textres = {420, 510};
    	textres = sfText_create();
    	sfText_setPosition(textres, position_textres);
    	sfText_setString(textres, "=");
    	sfText_setColor(textres, sfBlack);
    	sfText_setCharacterSize(textres, 50);
    	sfText_setFont(textres, font);
    	//

    	//TEXTE BOUTTON PAR. OUVRE
    	sfText *textoppar;
    	sfVector2f position_textoppar = {52, 635};
    	textoppar = sfText_create();
    	sfText_setPosition(textoppar, position_textoppar);
    	sfText_setString(textoppar, "(");
    	sfText_setColor(textoppar, sfBlack);
    	sfText_setCharacterSize(textoppar, 50);
    	sfText_setFont(textoppar, font);
    	//

    	//TEXTE BOUTTON SUPR.
    	sfText *texteff;
    	sfVector2f position_texteff= {170, 637};
    	texteff= sfText_create();
    	sfText_setPosition(texteff, position_texteff);
    	sfText_setString(texteff, "D");
    	sfText_setColor(texteff, sfBlack);
    	sfText_setCharacterSize(texteff, 50);
    	sfText_setFont(texteff, font);
    	//

    	//TEXTE BOUTTON PAR. FERMER
    	sfText *textclpar;
    	sfVector2f position_textclpar = {302, 635};
    	textclpar = sfText_create();
    	sfText_setPosition(textclpar, position_textclpar);
    	sfText_setString(textclpar, ")");
    	sfText_setColor(textclpar, sfBlack);
    	sfText_setCharacterSize(textclpar, 50);
    	sfText_setFont(textclpar, font);
    	//

    	//TEXTE BOUTTON C
    	sfText *textc;
    	sfVector2f position_textc = {420, 640};
    	textc = sfText_create();
    	sfText_setPosition(textc, position_textc);
    	sfText_setString(textc, "C");
    	sfText_setColor(textc, sfBlack);
    	sfText_setCharacterSize(textc, 50);
    	sfText_setFont(textc, font);
    	//

    	//TEXTE AFFICHAGE
    	sfText *textaff;
    	sfVector2f position_textaff = {45, 37};
    	textaff = sfText_create();
    	sfText_setPosition(textaff, position_textaff);
    	sfText_setString(textaff, resultat);
    	sfText_setColor(textaff, sfBlack);
    	sfText_setCharacterSize(textaff, 30);
    	sfText_setFont(textaff, font);
    	//

	window = sfRenderWindow_create(mode, "BistroMatic", sfClose, NULL);
	sfRenderWindow_setVerticalSyncEnabled(window, sfFalse);
	sfRenderWindow_clear(window, gris);

	if (!window)
		return 84;
	while (sfRenderWindow_isOpen(window)) {
	    while (sfRenderWindow_pollEvent(window, &event)) {
	    	if (event.type == sfEvtClosed || event.text.unicode == 27 && event.type == sfEvtTextEntered)
	        	sfRenderWindow_close(window);

	        if (event.text.unicode == 48 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 0
	        	sfRectangleShape_setFillColor(rect0, sfBlack);
	        	sfText_setColor(text0, sfWhite);
                if (!(resultat [0] == '0' && resultat[1] == '\0'))
                state = 0;
	        		resultat = add_to_res(resultat, "0", state);
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		  }
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 48) || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect0, sfWhite);
	        	sfText_setColor(text0, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 49 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 1
	        	sfRectangleShape_setFillColor(rect1, sfBlack);
			sfText_setColor(text1, sfWhite);
                resultat = add_to_res(resultat, "1", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 49) || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect1, sfWhite);
	        	sfText_setColor(text1, sfBlack);
		    	sfRenderWindow_display(window);
	        }
	        if (event.text.unicode == 50 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 2
	        	sfRectangleShape_setFillColor(rect2, sfBlack);
	        	sfText_setColor(text2, sfWhite);
                resultat = add_to_res(resultat, "2", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 50) || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect2, sfWhite);
	        	sfText_setColor(text2, sfBlack);
		    	sfRenderWindow_display(window);
	        }
	        if (event.text.unicode == 51 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 3
	        	sfRectangleShape_setFillColor(rect3, sfBlack);
	        	sfText_setColor(text3, sfWhite);
                resultat = add_to_res(resultat, "3", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 51) || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect3, sfWhite);
	        	sfText_setColor(text3, sfBlack);
		    	sfRenderWindow_display(window);
	        }
	        if (event.text.unicode == 52 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 4
	        	sfRectangleShape_setFillColor(rect4, sfBlack);
	        	sfText_setColor(text4, sfWhite);
                resultat = add_to_res(resultat, "4", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 52) || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect4, sfWhite);
	        	sfText_setColor(text4, sfBlack);
		    	sfRenderWindow_display(window);
	        }
	        if (event.text.unicode == 53 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 5
	        	sfRectangleShape_setFillColor(rect5, sfBlack);
	        	sfText_setColor(text5, sfWhite);
                resultat = add_to_res(resultat, "5", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 53) || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect5, sfWhite);
	        	sfText_setColor(text5, sfBlack);
		    	sfRenderWindow_display(window);
	        }
	        if (event.text.unicode == 54 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 6
	        	sfRectangleShape_setFillColor(rect6, sfBlack);
	        	sfText_setColor(text6, sfWhite);
                resultat = add_to_res(resultat, "6", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 54) || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect6, sfWhite);
	        	sfText_setColor(text6, sfBlack);
		    	sfRenderWindow_display(window);
	        }
	        if (event.text.unicode == 55 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 7
	        	sfRectangleShape_setFillColor(rect7, sfBlack);
	        	sfText_setColor(text7, sfWhite);
                resultat = add_to_res(resultat, "7", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 55) || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect7, sfWhite);
	        	sfText_setColor(text7, sfBlack);
		    	sfRenderWindow_display(window);
		}	        
	        if (event.text.unicode == 56 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 8
	        	sfRectangleShape_setFillColor(rect8, sfBlack);	        	
	        	sfText_setColor(text8, sfWhite);
                resultat = add_to_res(resultat, "8", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 56) || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect8, sfWhite);	        	
	        	sfText_setColor(text8, sfBlack);
		    	sfRenderWindow_display(window);
		}	        
	        if (event.text.unicode == 57 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON 9
	        	sfRectangleShape_setFillColor(rect9, sfBlack);
	       		sfText_setColor(text9, sfWhite);
                resultat = add_to_res(resultat, "9", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);		    	
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 57) || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rect9, sfWhite);
		    	sfRenderWindow_display(window);
	       		sfText_setColor(text9, sfBlack);
		}
	        if (event.text.unicode == 47 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON DIVISER
	        	sfRectangleShape_setFillColor(rectd, sfBlack);
	        	sfText_setColor(textd, sfWhite);
                resultat = add_to_res(resultat, "/", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 47) || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 245 && sfMouse_getPositionRenderWindow(window).y <= 245 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectd, sfWhite);
	        	sfText_setColor(textd, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 43 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON AJOUTER
	        	sfRectangleShape_setFillColor(recta, sfBlack);
	        	sfText_setColor(textadd, sfWhite);
                resultat = add_to_res(resultat, "+", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 43) || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(recta, sfWhite);
	        	sfText_setColor(textadd, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 45 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON SOUSTRAIRE
	        	sfRectangleShape_setFillColor(rectmin, sfBlack);
	        	sfText_setColor(textmin, sfWhite);
                resultat = add_to_res(resultat, "-", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 45) || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectmin, sfWhite);
	        	sfText_setColor(textmin, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 42 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON MULTIPLIER
	        	sfRectangleShape_setFillColor(rectmult, sfBlack);	  
	       		sfText_setColor(textmult, sfWhite);
                resultat = add_to_res(resultat, "*", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 42) || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 120 && sfMouse_getPositionRenderWindow(window).y <= 120 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectmult, sfWhite);
	       		sfText_setColor(textmult, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 37 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON MODULO
	        	sfRectangleShape_setFillColor(rectmod, sfBlack);	  
	       		sfText_setColor(textmod, sfWhite);
                resultat = add_to_res(resultat, "%", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 37) || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 370 && sfMouse_getPositionRenderWindow(window).y <= 370 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectmod, sfWhite);
	       		sfText_setColor(textmod, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 61 && event.type == sfEvtTextEntered || event.text.unicode == 13 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON EGALE
	        	sfRectangleShape_setFillColor(rectres, sfBlack);
	        	sfText_setColor(textres, sfWhite);
	        	//resultat = eval_expr("1234567890", "()+-*/%", resultat, my_strlen(resultat));
                resultat = "42";
                state = 1;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 61) || event.type == sfEvtKeyReleased && !(event.text.unicode == 13) || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 495 && sfMouse_getPositionRenderWindow(window).y <= 495 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectres, sfWhite);
	        	sfText_setColor(textres, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 40 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON OUVR. PAR.
	        	sfRectangleShape_setFillColor(rectoppar, sfBlack);
	        	sfText_setColor(textoppar, sfWhite);
                resultat = add_to_res(resultat, "(", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 40) || sfMouse_getPositionRenderWindow(window).x >= 20 && sfMouse_getPositionRenderWindow(window).x <= 20 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectoppar, sfWhite);
	        	sfText_setColor(textoppar, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 8 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON EFF
	        	sfRectangleShape_setFillColor(recteff, sfBlack);
	        	sfText_setColor(texteff, sfWhite);
                if (state == 0)
                    resultat = rem_to_res(resultat);
                if (state == 1)
                    resultat = "";
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 8) || sfMouse_getPositionRenderWindow(window).x >= 145 && sfMouse_getPositionRenderWindow(window).x <= 145 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(recteff, sfWhite);
	        	sfText_setColor(texteff, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 41 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON FERMER PAR.
	        	sfRectangleShape_setFillColor(rectclpar, sfBlack);
	        	sfText_setColor(textclpar, sfWhite);
                resultat = add_to_res(resultat, ")", state);
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 41) || sfMouse_getPositionRenderWindow(window).x >= 270 && sfMouse_getPositionRenderWindow(window).x <= 270 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectclpar, sfWhite);
	        	sfText_setColor(textclpar, sfBlack);
		    	sfRenderWindow_display(window);
		}
	        if (event.text.unicode == 127 && event.type == sfEvtTextEntered || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {//BOUTTON EFF
	        	sfRectangleShape_setFillColor(rectc, sfBlack);
	        	sfText_setColor(textc, sfWhite);
                resultat = "";
                state = 0;
	        	sfText_setString(textaff, resultat);
		    	sfRenderWindow_display(window);
		}
	        if (event.type == sfEvtKeyReleased && !(event.text.unicode == 127) || sfMouse_getPositionRenderWindow(window).x >= 395 && sfMouse_getPositionRenderWindow(window).x <= 395 + 85 && sfMouse_getPositionRenderWindow(window).y >= 620 && sfMouse_getPositionRenderWindow(window).y <= 620 + 85 && sfMouse_isButtonPressed(sfMouseLeft) == sfFalse) {
	        	sfRectangleShape_setFillColor(rectc, sfWhite);
	        	sfText_setColor(textc, sfBlack);
		    	sfRenderWindow_display(window);
		}

	    }
	    sfRenderWindow_drawRectangleShape(window, display_rect, NULL);
	    sfRenderWindow_drawText(window, textaff, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect7, NULL);
	    sfRenderWindow_drawText(window, text7, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect8, NULL);
	    sfRenderWindow_drawText(window, text8, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect9, NULL);
	    sfRenderWindow_drawText(window, text9, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectmult, NULL);
	    sfRenderWindow_drawText(window, textmult, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect4, NULL);
	    sfRenderWindow_drawText(window, text4, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect5, NULL);
	    sfRenderWindow_drawText(window, text5, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect6, NULL);
	    sfRenderWindow_drawText(window, text6, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectd, NULL);	    
	    sfRenderWindow_drawText(window, textd, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect1, NULL);	    
	    sfRenderWindow_drawText(window, text1, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect2, NULL);	    
	    sfRenderWindow_drawText(window, text2, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect3, NULL);	    
	    sfRenderWindow_drawText(window, text3, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectmod, NULL);	    
	    sfRenderWindow_drawText(window, textmod, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectmin, NULL);	    
	    sfRenderWindow_drawText(window, textmin, NULL);
	    sfRenderWindow_drawRectangleShape(window, rect0, NULL);	    
	    sfRenderWindow_drawText(window, text0, NULL);
	    sfRenderWindow_drawRectangleShape(window, recta, NULL);	    
	    sfRenderWindow_drawText(window, textadd, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectres, NULL);	    
	    sfRenderWindow_drawText(window, textres, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectoppar, NULL);	    
	    sfRenderWindow_drawText(window, textoppar, NULL);
	    sfRenderWindow_drawRectangleShape(window, recteff, NULL);
	    sfRenderWindow_drawText(window, texteff, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectclpar, NULL);	    
	    sfRenderWindow_drawText(window, textclpar, NULL);
	    sfRenderWindow_drawRectangleShape(window, rectc, NULL);	    
	    sfRenderWindow_drawText(window, textc, NULL);


	    sfRenderWindow_display(window);

	}

	sfRenderWindow_destroy(window);
	sfRectangleShape_destroy(display_rect);
	sfRectangleShape_destroy(rect7);
	sfRectangleShape_destroy(rect8);
	sfRectangleShape_destroy(rect9);
	sfRectangleShape_destroy(rectmult);
	sfRectangleShape_destroy(rect4);
	sfRectangleShape_destroy(rect5);
	sfRectangleShape_destroy(rect6);
	sfRectangleShape_destroy(rectd);
	sfRectangleShape_destroy(rect1);
	sfRectangleShape_destroy(rect2);
	sfRectangleShape_destroy(rect3);
	sfRectangleShape_destroy(rectmod);
	sfRectangleShape_destroy(rectmin);
	sfRectangleShape_destroy(rect0);
	sfRectangleShape_destroy(recta);
	sfRectangleShape_destroy(rectres);
	sfRectangleShape_destroy(rectoppar);
	sfRectangleShape_destroy(recteff);
	sfRectangleShape_destroy(rectclpar);
	sfRectangleShape_destroy(rectc);

	return 0;
}
