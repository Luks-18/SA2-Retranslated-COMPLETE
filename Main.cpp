#pragma once
#include "pch.h"
#include "string"

using namespace std;
// or #include "stdafx.h" for previous Visual Studio versions

extern "C"
{
	DataPointer(int, HudControl, 0x0174AFE0);
	DataPointer(int, SplitScreenControl, 0x01DD946C);
	DataPointer(int, WinHappens, 0x0174B002);
	DataPointer(__int16, MenuOrGame, 0x1934BE0);
	DataPointer(__int16, Timer, 0x174B03C);
	int WaitFrameIntro = 0;//オープニングポーズ
	int WaitFrameIntroChao = 0;//チャオ達とメタルとカオスゼロのイントロ（テキストなし）
	int WaitFrameIntroAmy = 0;//エミーイントローはもっと長い
	int WaitFrameWaza = 0;//一般的な技
	int WaitFrameWaza2 = 0;//シャドウ技ボス
	int WaitFrameWaza1P = 0;//一般的な技ボス
	int WaitFrameWaza21P = 0;//シャドウ技ボス
	int WaitFrameOmochao = 0;
	char TextBuffer[1000];
	/*case x:
		displayText(3, "\n", 60, 1);
		break;*/

	//Menus começam em 883 até 1199

	static const int loc_jmpback = 0x44313D;
	FunctionPointer(ObjectMaster*, displayText, (int a1, const char* message, int displayTime, int language), 0x6B6E20);



	/*
	void checkForSubtitle(int stageID, int bossHealth)
	{
		// Get the current stage ID and boss health value from the game
		int currentStageID = getCurrentStageID(); // Replace with function that gets the current stage ID
		int currentBossHealth = getCurrentBossHealth(); // Replace with function that gets the current boss health

		// Check if the current stage ID and boss health match the desired values
		if (currentStageID == stageID && currentBossHealth == bossHealth)
		{
			// Display the subtitle
			displayText(3, "\aSubtitle text goes here.", 160, 1);
		}
	}
	*/



	
	int randVoice(int num)
	{
		switch (num)
		{
			//ENGLISH-------------------------------------------------

		case 206:
			displayText(3, "\aRoger! I'll destroy the\npower source, then!", 170, 1);
			break;
		case 205:
			displayText(3, "\aTails? I found the control room.", 160, 1);
			break;
		case 906:
			displayText(3, "\aPlease select a story!", 120, 1);
			break;
		case 907:
			displayText(3, "\aSelect the story!", 120, 1);
			break;
		case 909:
			displayText(3, "\aChoose the story.", 120, 1);
			break;
		case 910:
			displayText(3, "\aIt's to select the story.", 120, 1);
			break;
		case 911:
			displayText(3, "\aPlease select the story.", 120, 1);
			break;
		case 912:
			displayText(3, "\aIt's to choose a story!", 120, 1);
			break;
		case 913:
			displayText(3, "\aChoose the story.", 120, 1);
			break;
		case 914:
			displayText(3, "\aWhich story do you wish to play?", 120, 1);
			break;
		case 916:
			displayText(3, "\aSelect a story!", 120, 1);
			break;
		case 917:
			displayText(3, "\aWhich story will you do?", 120, 1);
			break;
		case 918:
			displayText(3, "\aWhich scene will you start from?", 120, 1);
			break;
		case 919:
			displayText(3, "\aNow choose a scene!", 120, 1);
			break;
		case 921:
			displayText(3, "\aWhich moment will you start from?", 120, 1);
			break;
		case 922:
			displayText(3, "\aIt's to select the scene.", 120, 1);
			break;
		case 923:
			displayText(3, "\aYou can choose the scene.", 120, 1);
			break;
		case 924:
			displayText(3, "\aScenes and more scenes!\nThere you go, choose it!", 120, 1);
			break;
		case 925:
			displayText(3, "\aNow the scene.", 120, 1);
			break;
		case 926:
			displayText(3, "\aPlease select a scene.", 120, 1);
			break;
		case 928:
			displayText(3, "\aFrom which scene you'll start?", 120, 1);
			break;
		case 929:
			displayText(3, "\aWhich scene will you start from?", 120, 1);
			break;
		case 930:
			displayText(3, "\aSelect your character!", 120, 1);
			break;
		case 931:
			displayText(3, "\aWho are you?", 120, 1);
			break;
		case 933:
			displayText(3, "\aWell then, choose me.", 120, 1);
			break;
		case 934:
			displayText(3, "\aIt's to choose the character.", 120, 1);
			break;
		case 935:
			displayText(3, "\aWith whom are you going to play?", 120, 1);
			break;
		case 936:
			displayText(3, "\aHey, who will you play as?", 120, 1);
			break;
		case 937:
			displayText(3, "\aWho will you play as?", 120, 1);
			break;
		case 938:
			displayText(3, "\aPlease select your character.", 120, 1);
			break;
		case 940:
			displayText(3, "\aAll right, who d'ya wanna play with?", 120, 1);
			break;
		case 941:
			displayText(3, "\aChoose a character.", 120, 1);
			break;
		case 942:
			displayText(3, "\aChoose a stage.", 120, 1);
			break;
		case 943:
			displayText(3, "\aWhere will you go?", 120, 1);
			break;
		case 945:
			displayText(3, "\aWhich stage will you play?", 120, 1);
			break;
		case 946:
			displayText(3, "\aSelect a stage!", 120, 1);
			break;
		case 947:
			displayText(3, "\aIt's to select a stage.", 120, 1);
			break;
		case 948:
			displayText(3, "\aCould you choose a stage to play?", 120, 1);
			break;
		case 949:
			displayText(3, "\aChoose the stage.", 120, 1);
			break;
		case 950:
			displayText(3, "\aWhich stage will you play?", 120, 1);
			break;
		case 952:
			displayText(3, "\aYou pick a stage to play!", 120, 1);
			break;
		case 953:
			displayText(3, "\aIn which stage do you want to play?", 120, 1);
			break;
		case 954:
			displayText(3, "\aWhich one?", 120, 1);
			break;
		case 955:
			displayText(3, "\aWhich one do you want?", 120, 1);
			break;
		case 957:
			displayText(3, "\aWhich one do you want?", 120, 1);
			break;
		case 978:
			displayText(3, "\aWill you be the Hero? Or the Dark?", 120, 1);
			break;
		case 979:
			displayText(3, "\aChoose which one to play as.", 120, 1);
			break;
		case 981:
			displayText(3, "\aWho's gonna be the Dark one!?", 120, 1);
			break;
		case 982:
			displayText(3, "\aYou have to pick which\ngroup you will be.", 120, 1);
			break;
		case 983:
			displayText(3, "\aWhich one are you?", 120, 1);
			break;
		case 984:
			displayText(3, "\aWhich one will you choose?", 120, 1);
			break;
		case 985:
			displayText(3, "\aHero or Dark, which one?", 150, 1);
			break;
		case 986:
			displayText(3, "\aPlease decide which side you will play as.", 120, 1);
			break;
		case 988:
			displayText(3, "\aWell then, who's gonna be the Hero?", 120, 1);
			break;
		case 989:
			displayText(3, "\aWill you be the Hero?\nOr Dark indeed?", 140, 1);
			break;
		case 990:
			displayText(3, "\aWith which one will you play?", 120, 1);
			break;
		case 991:
			displayText(3, "\aSelect a battle game!", 120, 1);
			break;
		case 993:
			displayText(3, "\aCrush those heroes!", 120, 1);
			break;
		case 994:
			displayText(3, "\aWhat rules will you fight on?", 120, 1);
			break;
		case 995:
			displayText(3, "\aChoose the game.", 120, 1);
			break;
		case 996:
			displayText(3, "\aChoose one of these.", 120, 1);
			break;
		case 997:
			displayText(3, "\aDecide the way to fight.", 120, 1);
			break;
		case 998:
			displayText(3, "\aWhich game would you like to play?", 120, 1);
			break;
		case 1000:
			displayText(3, "\aH e y !   Don't lose to\nthe likes of the Dark side!", 120, 1);
			break;
		case 1001:
			displayText(3, "\aPick the one you want to play.", 120, 1);
			break;
		case 1002:
			displayText(3, "\aY'know... you can\nchange many things!", 140, 1);
			break;
		case 1003:
			displayText(3, "\aYou can change various settings!", 120, 1);
			break;
		case 1005:
			displayText(3, "\aHere you can configure many things.", 120, 1);
			break;
		case 1006:
			displayText(3, "\aYou can configure many things!", 120, 1);
			break;
		case 1007:
			displayText(3, "\aYou can configure many things.", 120, 1);
			break;
		case 1008:
			displayText(3, "\aIt seems you can change\nsome things here!", 120, 1);
			break;
		case 1010:
			displayText(3, "\aYou can change the settings.", 120, 1);
			break;
		case 1011:
			displayText(3, "\aYou can configure various settings.", 120, 1);
			break;
		case 1013:
			displayText(3, "\aYou can change many things!", 120, 1);
			break;
		case 1014:
			displayText(3, "\aYou can customize various things!", 120, 1);
			break;
		case 1015:
			displayText(3, "\aYou can hear many songs!", 120, 1);
			break;
		case 1016:
			displayText(3, "\aYou can choose songs\nand listen to them!", 120, 1);
			break;
		case 1018:
			displayText(3, "\aIs this the time for music!?", 120, 1);
			break;
		case 1019:
			displayText(3, "\aYou can listen to songs.", 120, 1);
			break;
		case 1020:
			displayText(3, "\aIt's for you to listen to songs.", 120, 1);
			break;
		case 1021:
			displayText(3, "\aHow about listening to some\nsongs once in a while?", 120, 1);
			break;
		case 1022:
			displayText(3, "\aFor me it's no interesting.", 120, 1);
			break;
		case 1023:
			displayText(3, "\aWhat music would you like to listen to?", 120, 1);
			break;
		case 1025:
			displayText(3, "\aWhat song are ya feelin' to?", 120, 1);
			break;
		case 1026:
			displayText(3, "\aYou can listen to songs!", 120, 1);
			break;
		case 1039:
			displayText(3, "\aWhere is your file?", 120, 1);
			break;
		case 1040:
			displayText(3, "\aChoose your file!", 120, 1);
			break;
		case 1042:
			displayText(3, "\aWhere is your file?", 120, 1);
			break;
		case 1043:
			displayText(3, "\aPick up your file.", 120, 1);
			break;
		case 1044:
			displayText(3, "\aSelect your file.", 120, 1);
			break;
		case 1045:
			displayText(3, "\aTell me where is your file.", 120, 1);
			break;
		case 1046:
			displayText(3, "\aSelect your file.", 120, 1);
			break;
		case 1047:
			displayText(3, "\aPlease select your file.", 120, 1);
			break;
		case 1049:
			displayText(3, "\aChoose your file!", 120, 1);
			break;
		case 1050:
			displayText(3, "\aTell me which file!", 120, 1);
			break;
		case 1075:
			displayText(3, "\aCongratulations!", 220, 1);
			break;
		case 1076:
			displayText(3, "\aCongratulations!", 220, 1);
			break;
		case 1078:
			displayText(3, "\aHm? Well done!", 220, 1);
			break;
		case 1079:
			displayText(3, "\aWell done!", 220, 1);
			break;
		case 1080:
			displayText(3, "\aCongratulations!", 220, 1);
			break;
		case 1081:
			displayText(3, "\aCongratulations!", 220, 1);
			break;
		case 1082:
			displayText(3, "\aAll right, it's good.", 220, 1);
			break;
		case 1083:
			displayText(3, "\aCongratulations.", 220, 1);
			break;
		case 1085:
			displayText(3, "\aC o n g r a t u l a t i o n s !", 220, 1);
			break;
		case 1086:
			displayText(3, "\aCongratulations!", 220, 1);
			break;
		case 1088:
			displayText(3, "\aAre you sure about that, right?", 100, 1);
			break;
		case 1089:
			displayText(3, "\aAre you sure about that?", 100, 1);
			break;
		case 1091:
			displayText(3, "\aAre you really sure?", 100, 1);
			break;
		case 1092:
			displayText(3, "\aThat's okay, right?", 100, 1);
			break;
		case 1093:
			displayText(3, "\aIt's this one, right?", 100, 1);
			break;
		case 1094:
			displayText(3, "\aAre you sure?", 100, 1);
			break;
		case 1095:
			displayText(3, "\aThis is the one, right?", 100, 1);
			break;
		case 1096:
			displayText(3, "\aAre you sure about that?", 100, 1);
			break;
		case 1098:
			displayText(3, "\aThat's the one, right?", 100, 1);
			break;
		case 1099:
			displayText(3, "\aAre you sure?", 100, 1);
			break;
		case 1122:
			displayText(3, "\aYou've collected a lot already!", 120, 1);
			break;
		case 1123:
			displayText(3, "\aYou can see your emblems collected!", 120, 1);
			break;
		case 1124:
			displayText(3, "\aI wonder if you've been\ncollecting the emblems...", 120, 1);
			break;
		case 1125:
			displayText(3, "\aYou can verify the\namount of emblems collected.", 120, 1);
			break;
		case 1126:
			displayText(3, "\aTake a look at the\nemblems collected.", 120, 1);
			break;
		case 1127:
			displayText(3, "\aI wonder if you've been\ncollecting them all...", 120, 1);
			break;
		case 1128:
			displayText(3, "\aIt's the emblem list.", 120, 1);
			break;
		case 1129:
			displayText(3, "\aThese are the results\nof the emblems collected.", 120, 1);
			break;
		case 1131:
			displayText(3, "\aYou can check the emblems you got!", 120, 1);
			break;
		case 1132:
			displayText(3, "\aI wonder if you got\nall of the emblems?", 120, 1);
			break;
		case 1133:
			displayText(3, "\aA kart driving game.", 120, 1);
			break;
		case 1134:
			displayText(3, "\aIt's a racing game.", 120, 1);
			break;
		case 1135:
			displayText(3, "\aA kart driving game!", 120, 1);
			break;
		case 1136:
			displayText(3, "\aA racing game.", 120, 1);
			break;
		case 1137:
			displayText(3, "\aA kart game.", 120, 1);
			break;
		case 1138:
			displayText(3, "\aIt's kart racing, huh.", 120, 1);
			break;
		case 1139:
			displayText(3, "\aIt's kart racing.", 120, 1);
			break;
		case 1140:
			displayText(3, "\aIt's a kart racing game.", 120, 1);
			break;
		case 1142:
			displayText(3, "\aIt's kart racing!", 120, 1);
			break;
		case 1143:
			displayText(3, "\aIt's the kart racing game!", 120, 1);
			break;
		case 1155:
			displayText(3, "\aChoose a menu theme.", 120, 1);
			break;
		case 1156:
			displayText(3, "\aYou can change the theme.", 120, 1);
			break;
		case 1157:
			displayText(3, "\aHey, do you not like me?", 120, 1);
			break;
		case 1158:
			displayText(3, "\aYou can change the menu theme.", 120, 1);
			break;
		case 1159:
			displayText(3, "\aYou can switch the menu theme.", 120, 1);
			break;
		case 1160:
			displayText(3, "\aHey wait up!\nAm I a displeasure to you?!", 120, 1);
			break;
		case 1161:
			displayText(3, "\aHere you can customize\nthe menu screen.", 120, 1);
			break;
		case 1162:
			displayText(3, "\aYou can customize\nthe menu screen.", 120, 1);
			break;
		case 1164:
			displayText(3, "\aYou can customize the menu theme.", 120, 1);
			break;
		case 1165:
			displayText(3, "\aYou can change to\nmany screen themes.", 120, 1);
			break;
		case 1242:
			displayText(3, "\aGood boy...", 30, 1);
			break;
		case 1243:
			displayText(3, "\aHmm, how cute!", 30, 1);
			break;
		case 1244:
			displayText(3, "\aPlaytime is over!", 30, 1);
			break;
		case 1245:
			displayText(3, "\aHere I come...", 30, 1);
			break;	
		case 1246:
			displayText(3, "\aFall down!", 30, 1);
			break;
		case 1247:
			displayText(3, "\aHip...Drop!!", 30, 1);
			break;
		case 1248:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aEat this!");
				WaitFrameWaza = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aEat this!");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1249:
			if (TwoPlayerMode) 
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aBlack Wave!");
				WaitFrameWaza = 1;
			}
			else 
			{
				strcpy_s(TextBuffer, "\aBlack Wave!");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1250:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aTake this one too!");
			WaitFrameWaza = 1;
			break;
		case 1251:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aCharm Ray!");
			WaitFrameWaza = 1;
			break;		
		case 1252:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI won't let you get\nthe Master Emerald!");
			WaitFrameIntro = 1;		
			break;
		case 1253:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI won't lose to the likes of you!");
			WaitFrameIntro = 1;
			break;
		case 1254:
			SplitScreenControl = 1;
			displayText(3, "\aHumpf, all bark and no bite...", 120, 1);
			break;
		case 1255:
			SplitScreenControl = 1;
			displayText(3, "\aAll of the world's gems are mine!", 160, 1);
			break;
		case 1256://DoubleStarWin
			SplitScreenControl = 1;
			displayText(3, "\aSorry, but you're no match for me.", 160, 1);
			break;
		case 1257://DoubleStarWin
			SplitScreenControl = 1;
			displayText(3, "\aHehe, looks like I'm one\nstep above than you.", 160, 1);
			break;
		case 1258://WonKnuxIntro
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aNo matter how much you try,\nthe result will be the same!");
			WaitFrameIntro = 1;
			break;
		case 1259://WonRougeIntro
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI still won't go easy on you.");
			WaitFrameIntro = 1;
			break;
		case 1260://LosingKnuxIntro
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI'm not holding back this time!");
			WaitFrameIntro = 1;
			break;
		case 1261://LosingRougeIntro
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aThis time I'm serious!");
			WaitFrameIntro = 1;
			break;
		case 1262:
			displayText(3, "\aI got this match!", 60, 1);
			break;
		case 1263:
			displayText(3, "\aThis is practically a win!", 60, 1);
			break;
		case 1264:
			displayText(3, "\aNow we're one-to-one!", 50, 1);
			break;
		case 1265:
			displayText(3, "\aI'll be the one to get the last one.", 60, 1);
			break;
		case 1266:
			displayText(3, "\aTwo more left.", 50, 1);
			break;
		case 1267:
			displayText(3, "\aTwo more left.", 50, 1);
			break;
		case 1268:
			displayText(3, "\aOne more left!", 50, 1);
			break;
		case 1269:
			displayText(3, "\aOnly one remaining!", 50, 1);
			break;
		case 1272:
			displayText(3, "\aI can't...", 30, 1);
			break;
		case 1273:
			displayText(3, "\aIt doesn't go...", 30, 1);
			break;
		case 1277:
			displayText(3, "\aAll right!", 40, 1);
			break;
		case 1278:
			displayText(3, "\aAll right!", 40, 1);
			break;
		case 1279:
			displayText(3, "\aLucky!", 40, 1);
			break;
		case 1286:
			displayText(3, "\aIt's around here...", 50, 1);
			break;
		case 1287:
			displayText(3, "\aThis area seems suspicious...", 40, 1);
			break;
		case 1295:
			displayText(3, "\aOuch!", 40, 1);
			break;
		case 1296:
			displayText(3, "\aGah... Darn it!", 40, 1);
			break;
		case 1297:
			displayText(3, "\aGeez... Enough already!", 60, 1);
			break;
		case 1300:
			displayText(3, "\aIs this it...?", 40, 1);
			break;
		case 1301:
			displayText(3, "\aDarn it...", 40, 1);
			break;
		case 1310://Knuckles Alt Intro
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aHere we go!");
				WaitFrameIntro = 1;

			}
			else
			{
				displayText(3, "\aHere we go!", 40, 1);
			}
			break;
		case 1312:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aAlright!", 60, 1);
			}
			break;
		case 1313:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aI've arrived!", 60, 1);
			}
			break;
		case 1314:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aCiao!", 60, 1);
			}
			break;
		case 1315:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aBye-bye!", 60, 1);
			}
			break;
		case 1316:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aH-Hey!", 60, 1);
			}
			break;
		case 1317:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aHey, wait up!", 60, 1);
			}
			break;
		case 1321:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aOuuuch!", 120, 1);
			}
			break;
		case 1322:
			displayText(3, "\aI'll protect the Master Emerald!", 110, 1);
			break;
		case 1323:
			displayText(3, "\aI never fail in getting what I want.", 120, 1);
			break;
		case 1330:
			displayText(3, "\aI found it!", 100, 1);
			break;
		case 1331:
			displayText(3, "\aI found it!", 100, 1);
			break;
		case 1332:
			displayText(3, "\aYes! That's perfect!", 120, 1);
			break;
		case 1333:
			displayText(3, "\aWhat did you think of\nmy magnificent techniques?", 200, 1);
			break;
		case 1334:
			displayText(3, "\aNice! Feels good!", 120, 1);
			break;
		case 1335:
			displayText(3, "\aFor me, that's a piece of cake.", 120, 1);
			break;
		case 1336:
			displayText(3, "\aWell, not bad.", 100, 1);
			break;
		case 1337:
			displayText(3, "\aThat's fair enough, I guess.", 120, 1);
			break;
		case 1338:
			displayText(3, "\aHmph, I took too much time.", 120, 1);
			break;
		case 1339:
			displayText(3, "\aI think I took a little too much time.", 120, 1);
			break;
		case 1340:
			displayText(3, "\aDarn it! Still a long way to go.", 120, 1);
			break;
		case 1341:
			displayText(3, "\aAt this rate I've failed\nas a treasure hunter...", 180, 1);
			break;
		case 1342:
			displayText(3, "\aHmph! Take my time\nand effort, will you!", 180, 1);
			break;
		case 1343:
			displayText(3, "\aHow's that? I'm strong, aren't I?", 200, 1);
			break;
		case 1344:
			displayText(3, "\aDon't ever go near\nmy Emeralds again!", 180, 1);
			break;
		case 1345:
			displayText(3, "\aNow I'm going to take my jewels back!", 180, 1);
			break;
		case 1458:
			displayText(3, "\aGeez... What annoying pests!", 120, 1);
			break;
		case 1460:
			displayText(3, "\aHuff... Let's get going.", 120, 1);
			break;
		case 1461://Shadow Alt Intro
			if (TwoPlayerMode) 
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aWell then, who's gonna be the\nnext one I'm gonna wipe out?");
				WaitFrameIntro = 1;

			}
			else
			{
				displayText(3, "\aWell then, who's gonna be the\nnext one I'm gonna wipe out?", 150, 1);
			}
			break;
		case 1462:
			displayText(3, "\aAlright...Let's get going.", 150, 1);
			break;
		case 1463:
			displayText(3, "\aLet me see... Which way should I go?", 180, 1);
			break;
		case 1464:
			displayText(3, "\aHuff... It's tiring to\noperate this for too long...", 180, 1);
			break;
		case 1465:
			displayText(3, "\aAlright, let's look\nfor the next emerald.", 150, 1);
			break;
		case 1466:
			displayText(3, "\aNow, where could my treasure be?", 150, 1);
			break;
		case 1467:
			displayText(3, "\aI sense the presence of the enemy...", 80, 1);
			break;
		case 1468:
			displayText(3, "\aGeez...", 60, 1);
			break;
		case 1517:
			displayText(3, "\aThere there...", 30, 1);
			break;
		case 1518:
			displayText(3, "\aPlaytime is over.", 30, 1);
			break;
		case 1519:
			displayText(3, "\aLet's go!", 30, 1);
			break;
		case 1520:
			displayText(3, "\aHere I go!", 30, 1);
			break;
		case 1521:
			displayText(3, "\aS p e e d   U p !", 30, 1);
			break;
		case 1522:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aDisappear!");
				WaitFrameWaza2 = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aDisappear!");
				WaitFrameWaza21P = 1;
			}
			break;
		case 1523:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aS o n i c   W i n d !");
				WaitFrameWaza = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aS o n i c   W i n d !");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1524:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aChaos Control!");
			WaitFrameWaza2 = 1;
			break;
		case 1525:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aT i m e   S t o p !");
			WaitFrameWaza = 1;
			break;
		case 1526:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aLet me show you our power gap.");
			WaitFrameIntro = 1;
			break;
		case 1527:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aNow, let's begin!");
			WaitFrameIntro = 1;
			break;
		case 1528:
			SplitScreenControl = 1;
			displayText(3, "\aHumph, a fake is still a fake after all.", 180, 1);
			break;
		case 1529:
			SplitScreenControl = 1;
			displayText(3, "\aH e y   g u y !  I'll play\nwith you some other time!", 180, 1);
			break;
		case 1530:
			SplitScreenControl = 1;
			displayText(3, "\aHumph, you have disappointed me.", 180, 1);
			break;
		case 1531:
			SplitScreenControl = 1;
			displayText(3, "\aWhat's wrong, impostor?\nGiving up already?", 180, 1);
			break;
		case 1532:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aNo matter how much you try,\nit's pointless.");
			WaitFrameIntro = 1;
			break;
		case 1533:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aO k a y ,   C ' m o n !");
			WaitFrameIntro = 1;
			break;
		case 1534:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aSoon enough, you'll get\nto see my true power.");
			WaitFrameIntro = 1;
			break;
		case 1535:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aThis time I'm going all in!");
			WaitFrameIntro = 1;
			break;
		case 1537:
			displayText(3, "\aR e a d y...", 30, 1);
			break;
		case 1538:
			displayText(3, "\aDisappear!!", 30, 1);
			break;
		case 1539:
			displayText(3, "\aG O ! !", 30, 1);
			break;
		//case 1553:
			//displayText(3, "\aBeleza!", 60, 1);
			//break;
		case 1552:
			displayText(3, "\aAll right.", 60, 1);
			break;
		//case 1560:
			//displayText(3, "\aNão me segura!", 30, 1);
			//break;
		case 1564:
			displayText(3, "\aUgh...! Maria...", 70, 1);
			break;
		case 1567:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aN o ...!", 60, 1);
			}
			break;
		case 1570:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aWhat...!?", 60, 1);
			}
			
			break;
		case 1572:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aIt's useless!", 60, 1);
			}
			break;
		case 1577:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aL e t ' s   g o !", 60, 1);
			}
			
			break;
		case 1579:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aH e y   g u y !", 60, 1);
			}
			
			break;
		case 1581:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aH-Hey...!", 60, 1);
			}
			
			break;
		case 1576:
			displayText(3, "\aI'll get revenge... on everyone!", 120, 1);
			break;
		case 1584:
			displayText(3, "\aFlawless.", 60, 1);
			break;
		case 1585:
			displayText(3, "\aL e t ' s   R o c k !", 40, 1);
			break;
		case 1586:
			displayText(3, "\aHumpf, child's play.", 120, 1);
			break;
		case 1587://Sonic Alt Intro
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aH e r e   w e   g o !");
				WaitFrameIntro = 1;

			}
			else
			{
				displayText(3, "\aH e r e   w e   g o !", 120, 1);
			}
			break;
		case 1588:
			displayText(3, "\aI guess that's fitting for now.", 120, 1);
			break;
		case 1590:
			displayText(3, "\aDid I play around too much...?", 120, 1);
			break;
		case 1592:
			displayText(3, "\aHaven't I fully recovered yet...?", 120, 1);
			break;
		case 1593:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aY e s !", 60, 1);
			}
			break;
		case 1594:
			displayText(3, "\aHmph. Incompetent humans.", 180, 1);
			break;
		case 1595:
			displayText(3, "\aT h a t   w a s   t i g h t !", 160, 1);
			break;
		case 1596:
			displayText(3, "\aSorry, but I don't have\ntime to play with you.", 180, 1);
			break;
		case 1597:
			displayText(3, "\aT o o   e a s y !\nPiece of cake!", 160, 1);
			break;
		case 1598:
			displayText(3, "\aI told you, I'm the Ultimate.", 180, 1);
			break;
		case 1599:
			displayText(3, "\aJ u s t   m a d e   i t .", 120, 1);
			break;
		case 1600:
			displayText(3, "\aDie, you ugly sample!", 160, 1);
			break;
		case 1601:
			displayText(3, "\aHuh,   n o   p r o b l e m ...", 150, 1);
			break;
		case 1602:
			displayText(3, "\aVanish, along with the\nProfessor's wicked mind!", 200, 1);
			break;
		case 1603:
			displayText(3, "\aTch!   N o t   m y   d a y ...", 160, 1);
			break;
		case 1604://Shadow Win against Amy/Metal
			SplitScreenControl = 1;
			displayText(3, "\aHumph, so that's as much\nas you have after all...", 180, 1);
			break;
		case 1605:
			displayText(3, "\aH e y   g u y !   T a k e   c a r e!", 150, 1);
			break;
		case 1606:
			displayText(3, "\aMy name is Sonic.\nYou better remember it!", 180, 1);
			break;
		case 1607:
			displayText(3, "\aPrepare a better toy next time!", 150, 1);
			break;
		case 1608:
			displayText(3, "\aSorry, but it's all over now!", 180, 1);
			break;
		case 1610:
			displayText(3, "\aThe party is over, you monster!", 180, 1);
			break;
		case 1613://Sonic Win against Amy/Metal
			SplitScreenControl = 1;
			displayText(3, "\aNobody can defeat me\nwhen it comes to running!", 180, 1);
			break;
		case 1632:
			displayText(3, "\aHere I go, fox-boy!", 30, 1);
			break;
		case 1633:
			displayText(3, "\aCharge complete!", 30, 1);
			break;
		case 1634:
			displayText(3, "\aTake this, too!", 30, 1);
			break;
		case 1635:
			displayText(3, "\aLaser, fire!", 30, 1);
			break;
		case 1636:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aNow this!");
				WaitFrameWaza = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aNow this!");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1637:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aRocket Launcher, fire!");
				WaitFrameWaza = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aRocket Launcher, fire!");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1638:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aThis will finish you off!");
				WaitFrameWaza = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aThis will finish you off!");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1639:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aPower Laser, fire!");
				WaitFrameWaza = 1;
			}
			else
			{
				strcpy_s(TextBuffer, "\aPower Laser, fire!");
				WaitFrameWaza1P = 1;
			}
			break;
		case 1640:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aDo you really think you can beat me?");
			WaitFrameIntro = 1;
			break;
		case 1641:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI won't lose!");
			WaitFrameIntro = 1;
			break;
		case 1642:
			if (TwoPlayerMode)
			{
				SplitScreenControl = 1;
				displayText(3, "\aIt's way too early for\nyou to win against me!", 180, 1);
			}
			else
			{
				displayText(3, "\aIt's way too early for\nyou to win against me!", 180, 1);
			}
			break;
		case 1643:
			SplitScreenControl = 1;
			displayText(3, "\aI did it! Victory is mine!", 160, 1);
			break;
		case 1644:
			SplitScreenControl = 1;
			displayText(3, "\aHo hohoho! Learned the lesson?", 160, 1);
			break;
		case 1645:
			SplitScreenControl = 1;
			displayText(3, "\aAs if I would ever lose\nto the likes of Eggman!", 160, 1);
			break;
		case 1646:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI'll make you realize your place!");
			WaitFrameIntro = 1;
			break;
		case 1647:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aLet's settle this, one more time!");
			WaitFrameIntro = 1;
			break;
		case 1648:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aThis time I'm going full-power!");
			WaitFrameIntro = 1;
			break;
		case 1649:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aAlright, this time it will be different!");
			WaitFrameIntro = 1;
			break;
		case 1661:
			displayText(3, "\aIt's over if this keeps up...!", 60, 1);
			break;
		case 1660:
			displayText(3, "\aYou...! Don't think you\ncan get away with this!", 60, 1);
			break;
		case 1662:
			displayText(3, "\aWhat?! There is not much power left!", 60, 1);
			break;
		case 1663:
			displayText(3, "\aMy machine is already at it's limit!", 60, 1);
			break;
		case 1666:
			displayText(3, "\aPower-Up!", 60, 1);
			break;
		case 1667:
			displayText(3, "\aHere I come!", 60, 1);
			break;
		case 1676:
			displayText(3, "\aIs this as far as it goes...?", 120, 1);
			break;
		case 1685:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aBoost up!", 60, 1);
			}
			break;
		case 1686:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aFarewell!", 60, 1);
			}
			break;
		case 1687:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aI'll take the lead!", 60, 1);
			}
			break;
		case 1688:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aWh-What in the world!?", 60, 1);
			}
			break;
		case 1689:
			if (TwoPlayerMode)
			{

			}
			else
			{
				displayText(3, "\aOh! Wait for me!", 60, 1);
			}
			break;
		case 1692:
			displayText(3, "\aThe world is mine!", 100, 1);
			break;
		case 1700:
			displayText(3, "\aAlright!", 30, 1);
			break;
		case 1702:
			displayText(3, "\aNow you realized the power\nof the Great Doctor Eggman!", 180, 1);
			break;
		case 1703:
			displayText(3, "\aI did it!", 60, 1);
			break;
		case 1704:
			displayText(3, "\aHo hohohohoho! Easy peasy!", 160, 1);
			break;
		case 1705:
			displayText(3, "\aI did it, Sonic!", 100, 1);
			break;
		case 1706:
			displayText(3, "\aHuff, not a big deal.", 80, 1);
			break;
		case 1707:
			displayText(3, "\aWell done!", 80, 1);
			break;
		case 1708:
			displayText(3, "\aMaybe I got a bit too relaxed.", 150, 1);
			break;
		case 1709:
			displayText(3, "\aWell, it could be worse.", 100, 1);
			break;
		case 1710:
			displayText(3, "\aI can't believe I did this...", 120, 1);
			break;
		case 1711:
			displayText(3, "\aI struggled with it a bit.", 100, 1);
			break;
		case 1713:
			displayText(3, "\aI gotta work harder...", 120, 1);
			break;
		case 1715:
			if (TwoPlayerMode)
			{
				SplitScreenControl = 1;
				displayText(3, "\aHow's that! Are you giving up?", 180, 1);
			}
			else
			{
				displayText(3, "\aHow's that! Are you giving up?", 100, 1);
			}

			break;
		case 1726:
			displayText(3, "\aNow there...", 30, 1);
			break;
		case 1729:
			displayText(3, "\aGood boy!", 30, 1);
			break;
		case 1732:
			displayText(3, "\aAlright, it's charged!", 30, 1);
			break;
		case 1735:
			displayText(3, "\aHoohohohoho! Sonic! Come here\nif you want to save young girl's life!", 430, 1);
			break;
		case 1736:
			displayText(3, "\aWhat are you doing, Sonic?!\nThere's no time to play around!", 240, 1);
			break;
		case 1737:
			displayText(3, "\aYou're getting late, Sonic!\nIf you don't get here fast enough,\nthe young girl's life is forfeit!", 430, 1);
			break;
		case 1738:
			displayText(3, "\aEmergency! Emergency!", 120, 1);
			break;
		case 1750:
			displayText(3, "\aAmy, Tails... Wait for me...!", 180, 1);
			break;
		case 1751:
			displayText(3, "\aTch! What a pain this place is!", 180, 1);
			break;
		case 1757:
			displayText(3, "\aSystem alert! System alert\nIntruder detected in system area!\nActivating debug program!", 600, 1);
			break;
		case 1758:
			displayText(3, "\aSystem alert! System alert! Energy core\npreservation program has been canceled!\nInitiating self-repair program!", 600, 1);
			break;
		case 1759:
			displayText(3, "\aSystem alert! System alert!\nTop security lock has been opened!\nActivating final defense program!", 430, 1);
			break;
		case 1782:
			displayText(3, "\aWhen I get through here\nI'll leave the rest to them!", 180, 1);
			break;
		case 1783:
			displayText(3, "\aI gotta take the Master Emerald\nthere at all costs!", 150, 1);
			break;
		case 1784:
			displayText(3, "\aSomehow I feel we're halfway\nthrough it! Almost there!", 150, 1);
			break;
		case 1785:
			displayText(3, "\aNow all I have to do\nis blast through here!", 150, 1);
			break;
		case 1786:
			displayText(3, "\aAt any rate, I gotta do my best!", 150, 1);
			break;
		case 1787:
			displayText(3, "\aThe central dome must be up ahead.", 150, 1);
			break;
		case 1788:
			displayText(3, "\aWhere is the switch Eggman talked about?", 150, 1);
			break;
		case 1789:
			displayText(3, "\aCome on! Where exactly is\nthis switch he talked about?!", 200, 1);
			break;
		case 1790:
			displayText(3, "\aSo the cannon's core is up ahead...!", 150, 1);
			break;
		case 1791:
			displayText(3, "\aAnyway, I think it's okay\nif we go through here...", 150, 1);
			break;
		case 1792:
			displayText(3, "\aThe President must be up ahead!\nI'm going after him!", 200, 1);
			break;
		case 1793:
			displayText(3, "\aAlright! I found the President!", 180, 1);
			break;
		case 1794:
			displayText(3, "\aOkay! I'm getting closer!", 120, 1);
			break;
		case 1795:
			displayText(3, "\aTails! Did you find the President?", 150, 1);
			break;
		case 1796:
			displayText(3, "\aJust a little more, Sonic!\nHold on a bit!", 180, 1);
			break;
		case 1798:
			displayText(3, "\aOh no... I lost him...", 180, 1);
			break;
		case 1799:
			displayText(3, "\aI found the Emerald signal!\nWait on me, fox-boy!", 200, 1);
			break;
		case 1800:
			displayText(3, "\aI found you, fox-boy!", 150, 1);
			break;
		case 1801:
			displayText(3, "\aAlright, I've gotten closer.", 120, 1);
			break;
		case 1802:
			displayText(3, "\aRouge! Did you find Tails?", 150, 1);
			break;
		case 1803:
			displayText(3, "\aShut up, hold on a bit!\nLeave this to me!", 180, 1);
			break;
		case 1805:
			displayText(3, "\aRunning out of gas at a\nmoment like this?! Ughhh! ", 180, 1);
			break;
		case 1806:
			displayText(3, "\aInforming all police units in the city.\nFugitive is heading south. Block the\nmain roads and capture the fugitive!", 500, 1);
			break;
		case 1810:
			displayText(3, "\aSeriously, what have I even done?", 180, 1);
			break;
		case 1811:
			displayText(3, "\aThis city sure has\nreally steep hills!", 150, 1);
			break;
		case 1822:
			displayText(3, "\aIf I don't do it quickly,\nthat bat-girl will surpass me!", 200, 1);
			break;
		case 1823:
			displayText(3, "\aWhat an unimaginable wind.", 150, 1);
			break;
		case 1834:
			displayText(3, "\aI wonder if it's true that the\nemerald will go back to normal\nby collecting the pieces...", 180, 1);
			break;
		case 1835:
			displayText(3, "\aI'm not too fond of these\nmud-smelling places.", 150, 1);
			break;
		case 1843:
			displayText(3, "\aWhere can I find those\nkeys for the door?", 150, 1);
			break;
		case 1844:
			displayText(3, "\aGeez! It's like a maze!", 150, 1);
			break;
		case 1853:
			displayText(3, "\aThere must be a key somewhere.", 150, 1);
			break;
		case 1854:
			displayText(3, "\aThere are dangerous robots here,\nisn't there?", 150, 1);
			break;
		case 1892:
			displayText(3, "\aI have to find the power source\nand destroy it, quickly!", 150, 1);
			break;
		case 1893:
			displayText(3, "\aHuff... It's quite suffocating.", 170, 1);
			break;
		case 1898:
			displayText(3, "\aI don't know who it is, but\nwhoever gets in my way will die!", 200, 1);
			break;
		case 1899:
			displayText(3, "\aHumpf, this place remains the same.", 170, 1);
			break;
		case 1900:
			displayText(3, "\aI've got to hurry,\nthe island will explode!", 120, 1);
			break;
		case 1901:
			displayText(3, "\aTch! Even here there are\nmilitary guard robots!", 200, 1);
			break;
		case 1906:
			displayText(3, "\aI've got to hurry! There's\nno time left before it fires!", 130, 1);
			break;
		case 1908:
			displayText(3, "\aWhether it's in space or anywhere else...\nI'll blast through it!", 200, 1);
			break;
		case 1909:
			displayText(3, "\aIntruder warning!\nFirst-class system alert!", 100, 1);
			break;
		case 1910:
			displayText(3, "\aLevel 1 barrier wall breached!\nUrgent deployment! Eliminate the intruder!", 300, 1);
			break;
		case 1911:
			displayText(3, "\aLevel 2 barrier wall breached!\nLevel 2 barrier wall breached!", 240, 1);
			break;
		case 1912:
			displayText(3, "\aLevel 3 barrier wall breached! The enemy\nis progressing to section 38! Eliminate!!", 360, 1);
			break;
		case 1913:
			displayText(3, "\aLevel 4 barrier wall breached!\nEliminate! Eliminate!", 240, 1);
			break;
		case 1914:
			displayText(3, "\aLevel 5 barrier wall breached! Switch\nthe facility to defense mode! Protect\nthe barrier walls at all costs. Hurry!", 480, 1);
			break;
		case 1918:
			displayText(3, "\aNo matter what they do,\nI will lay my hands on it!", 150, 1);
			break;
		case 1919:
			displayText(3, "\aDo you think those toys\nare able to stop me?", 200, 1);
			break;
		//case 1920:
			//displayText(3, "\aO míssil irá decolar em 15 segundos.", 120, 1);
			//break;
		case 1926:
			displayText(3, "\aGotta say good-bye to\nthis place real quick.", 100, 1);
			break;
		case 1927:
			displayText(3, "\a*Whistle*! How impressive!", 100, 1);
			break;
		case 1931:
			displayText(3, "\aThe entrance should be\nsomewhere around here...", 150, 1);
			break;
		case 1932:
			displayText(3, "\aHmm, is it okay to destroy this...?", 180, 1);
			break;
		case 1936:
			displayText(3, "\aIt's time to ignore those nobodies\nand get out of the city.", 150, 1);
			break;
		case 1937:
			displayText(3, "\aHumpf, foolish humans.", 160, 1);
			break;
		case 1940:
			displayText(3, "\aI've got to hurry, there is not\nmuch time until the explosion.", 150, 1);
			break;
		case 1941:
			displayText(3, "\aMist, huh...\nHumpf, not bad.", 180, 1);
			break;
		case 1951:
			displayText(3, "\aThe central control room\nshould be around here.", 150, 1);
			break;
		case 1952:
			displayText(3, "\aThis is... the colony\nmy grandfather created...", 160, 1);
			break;
		case 1967:
			displayText(3, "\aI feel like the treasure hunt\nis getting close to it's finale.", 150, 1);
			break;
		case 1968:
			displayText(3, "\aGeez, is there no decent equipment?", 200, 1);
			break;
		case 1981:
			displayText(3, "\aOh boy, to think I would come into\nouter space to hunt for the pieces...", 220, 1);
			break;
		case 1982:
			displayText(3, "\aOnly I can throw meteorites\nwith my barehands!", 200, 1);
			break;
		case 1989:
			displayText(3, "\aI have to flee from them\nand find a safe place!", 160, 1);
			break;
		case 1990:
			displayText(3, "\aEarthquakes are scary!", 100, 1);
			break;
		case 1997:
			displayText(3, "\aThere must be a way to get\nto outer space from here.", 160, 1);
			break;
		case 1998:
			displayText(3, "\aOh well... I never thought the inside\nof a pyramid would become like this.", 240, 1);
			break;
		case 2011:
			displayText(3, "\aI sense it... there is no doubt!\nThe Master Emerald pieces are here!", 200, 1);
			break;
		case 2012:
			displayText(3, "\aMan, what a creppy place.", 120, 1);
			break;
		case 2017:
			displayText(3, "\aI have to find Sonic's jail, quick!", 140, 1);
			break;
		case 2018:
			displayText(3, "\aHuff... It's so big...!", 140, 1);
			break;
		case 2037:
			displayText(3, "\aI'll leave Shadow's\ndata matter for later.", 140, 1);
			break;
		case 2038:
			displayText(3, "\aThe military security is so lax, honestly.", 140, 1);
			break;
		case 2041:
			displayText(3, "\aIt's only a matter of time until\nwe get the last Chaos Emerald.", 170, 1);
			break;
		case 2042:
			displayText(3, "\aEven a rail like that is useful, huh.", 140, 1);
			break;
		case 2045:
			displayText(3, "\aIn any case, I'll get back\nto the base and start over.", 140, 1);
			break;
		case 2046:
			displayText(3, "\aThe sand is not good for the mech,\nbeing here is a waste of time.", 140, 1);
			break;
		case 2062:
			displayText(3, "\aBastard Sonic... This time you'll\nget a taste of with my plan!", 240, 1);
			break;
		case 2063:
			displayText(3, "\aMy walker is almighty even in space!", 140, 1);
			break;
		case 2065:
			displayText(3, "\aI'll go wild.", 100, 1);
			break;
		case 2066://Eggman Alt Intro
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aEach and every one of them\nis no match for me.");
				WaitFrameIntro = 1;
			}
			else
			{
				displayText(3, "\aEach and every one of them\nis no match for me.", 160, 1);
			}
			break;
		case 2019:
			displayText(3, "\aRouge! Collect the Chaos Emeralds before\nthe military group notices you!", 120, 1);
			break;
		case 2020:
			displayText(3, "\aHurry up, Rouge! We don't have time\nleft before the island blows up!", 150, 1);
			break;
		case 2021:
			displayText(3, "\aWhat's taking you so long! Go get\nthose Chaos Emeralds, pronto!", 150, 1);
			break;
		case 2022:
			displayText(3, "\aWhat the heck are you doing! You're\nalready way past the appointed time!", 150, 1);
			break;
		case 2023:
			displayText(3, "\aRouge! We don't have long before\nthe island goes up in smoke!\nHurry! Hurry it up!", 170, 1);
			break;
		case 2024:
			displayText(3, "\aAaaggghh, no, no, no, noooo!\nOperation failed!", 270, 1);
			break;
		case 2067:
			displayText(3, "\aHoohohohoho! It's way too early\nfor you to go up against me!", 240, 1);
			break;
		case 2068:
			displayText(3, "\aWhat the?!", 30, 1);
			break;
		case 2069:
			displayText(3, "\aDamn it! Stand still!", 180, 1);
			break;
		case 2070:
			displayText(3, "\aTake this!", 40, 1);
			break;
		case 2071:
			displayText(3, "\aYou're not getting away!", 40, 1);
			break;
		case 2072:
			displayText(3, "\aYou're not getting away with this!", 180, 1);
			break;
		case 2073:
			displayText(3, "\aI... I let my guard down...", 160, 1);
			break;
		case 2079:
			displayText(3, "\aWhat can you do by yourself,\nyou weak little fox?", 250, 1);
			break;
		case 2080:
			displayText(3, "\aDamn it... don't get excited!", 180, 1);
			break;
		case 2081:
			displayText(3, "\aOugh! Not bad, Tails...!", 180, 1);
			break;
		case 2082:
			displayText(3, "\aI got beaten by the likes of Tails...", 180, 1);
			break;
		case 2083:
			displayText(3, "\aPlaytime is over, Tails!", 80, 1);
			break;
		case 2084:
			displayText(3, "\aEat this!", 50, 1);
			break;
			//case 2091:
				////displayText(3, "\aBig Foot do pelotão Aranha reportando ao HQ\nO fugitivo procurado foi localizado.\nIniciando operação de captura.", 300, 1);
				//strcpy_s(TextBuffer, "\aBig Foot do pelotão Aranha reportando ao HQ\nO fugitivo procurado foi localizado.\nIniciando operação de captura.");
				//WaitFrameGUN = 1;
				//break;
			//case 2092:
			//	displayText(3, "\aEntendido.", 60, 1);
				//break;
			//case 2093:
				//strcpy_s(TextBuffer, "\aBig Foot reportando ao HQ! Estou em combate\ncom o fugitivo mencionado! Solicito reforços\ncom urgência!");
				//WaitFrameGUN = 1;
				//break;
			//case 2094:
				//displayText(3, "\aDe..derrotado por um único ouriço...", 102, 1);
				//break;
			//case 2098:
				//displayText(3, "\aFlying Dog reportando ao comando do HQ.\nUm intruso foi detectado na Security Hall\nPreparando para atacar.", 360, 1);
				//break;
			//case 2099:
				//displayText(3, "\aFlying Dog reportando ao HQ! Estou recebendo", 30, 1);
				//break;//\ndanos graves! Solicito que tranquem a\nSecurity Hall o mais rápido possível!
			//case 2100:
				//displayText(1, "\aNão é possível... o Flying Dog não pode ser...", 180, 1);
				//break;
			//case 2103:
				//displayText(3, "\aHot Shot do pelotão Escorpião. Entramos na área\nclassificada e confirmo o aparecimento de um\nsujeito perigoso. Pronto para eliminar à força.", 300, 1);
				//break;
			//case 2104:
				//displayText(3, "\aAq-Aqui é o Hot Shot do pelotão Escorpião!", 160, 1);
				//break;//\nSuas habilidades de combate são inimagináveis.\nS - Solicito reforços o mais rápido possível!
			//case 2105:
				//displayText(0, "\aForte...forte demais...", 160, 1);
				//break;
		case 2107:
			displayText(3, "\aI'm gonna take back the Master\nEmerald that you collected!", 200, 1);
			break;
		case 2109:
			displayText(3, "\aErgh! The fight has just begun!", 180, 1);
			break;
		case 2110:
			displayText(3, "\aErgh! I guess you're\nno ordinary sneaky thief!", 180, 1);
			break;
		case 2111:
			displayText(3, "\aI will... protect the Master Emerald...", 180, 1);
			break;
		case 2112:
			displayText(3, "\aEnough of this, give up!", 70, 1);
			break;
		case 2113:
			displayText(3, "\aSorry, but this will\nfinish you off!", 120, 1);
			break;
		case 2151:
			displayText(3, "\aShadow, switch places with me!\nYou don't have many rings left!", 240, 1);
			break;
		case 2152:
			displayText(3, "\aShadow! You have no rings!\nYou're gonna lose your super form!", 180, 1);
			break;
		case 2153:
			displayText(3, "\aSonic, what are you doing!?\nYou're almost out of rings!\nSwitch places with me!", 180, 1);
			break;
		case 2154:
			displayText(3, "\aSonic! You have no rings!\nYou will lose your super form!", 180, 1);
			break;
		case 2155:
			displayText(3, "\aShadow, I'm gonna collect rings.\nI'm counting on you in the meantime!", 180, 1);
			break;
		case 2156:
			displayText(3, "\aI'm counting on you, Shadow!", 60, 1);
			break;
		case 2157:
			displayText(3, "\aY e s !  I damaged it!\nHow are you doing, Shadow?", 180, 1);
			break;
		case 2158:
			displayText(3, "\aI'll collect rings.\nI'm counting on you, Sonic!", 120, 1);
			break;
		case 2159:
			displayText(3, "\aSonic, I'm counting on you!", 60, 1);
			break;
		case 2160:
			displayText(3, "\aAlright! That should work!\nSonic, how is it going for you?", 240, 1);
			break;
		case 2161:
			displayText(3, "\aShadow, you take a break!\nNow's my time to play!", 240, 1);
			break;
		case 2162:
			displayText(3, "\aTime to finish this now!", 120, 1);
			break;
		case 2163:
			displayText(3, "\aSonic, leave this to me! I'll end its life!", 240, 1);
			break;
		case 2164:
			displayText(3, "\aHere I come! You monster!", 60, 1);
			break;
		case 2194:
			displayText(3, "\aNow you're gonna give my Emeralds back!", 160, 1);
			break;
		case 2196:
			displayText(3, "\aOuch...! Ooohh, you're not\ngetting away with this!", 160, 1);
			break;
		case 2197:
			displayText(3, "\aOw! I'm giving it my all now!", 180, 1);
			break;
		case 2198:
			displayText(3, "\aH-How can this be! How could I lose...", 150, 1);
			break;
		case 2199:
			displayText(3, "\aHere I go, watch this!", 70, 1);
			break;
		case 2200:
			displayText(3, "\aHere I go, prepare yourself!", 60, 1);
			break;
		case 2212:
			displayText(3, "\aI don't have time to play with you.\nI'll end this quick.", 180, 1);
			break;
		case 2213:
			displayText(3, "\aWhat...?!", 30, 1);
			break;
		case 2214:
			displayText(3, "\aGah...! Interesting...", 100, 1);
			break;
		case 2215:
			displayText(3, "\aUgh! I see... I guess you're\nnot an ordinary hedgehog...", 240, 1);
			break;
		case 2216:
			displayText(3, "\aLet me put an end to this now!", 100, 1);
			break;
		case 2218:
			displayText(3, "\aBut... you're a lowly fake...", 150, 1);
			break;
		case 2224:
			displayText(3, "\aI'll send you off to the netherworld.\nBehold the true Chaos Control.", 240, 1);
			break;
		case 2225:
			displayText(3, "\aI see... not bad!", 180, 1);
			break;
		case 2226:
			displayText(3, "\aUgh...! No way... He's that strong...?!", 240, 1);
			break;
		case 2227:
			displayText(3, "\aBut I am... the ultimate... life form...", 140, 1);
			break;
		case 2230:
			displayText(3, "\aThis is... the ultimate power!", 120, 1);
			break;
		case 2236:
			displayText(3, "\aYou're not getting away\nthis time! You impostor!", 200, 1);
			break;
		case 2238:
			displayText(3, "\aGah! Not bad!", 100, 1);
			break;
		case 2239:
			displayText(3, "\aUgh...! You... who the heck even are you?!", 180, 1);
			break;
		case 2242:
			displayText(3, "\aNo way... I had to lose to him here...", 160, 1);
			break;
		case 2247:
			displayText(3, "\aShadow, it's time to settle this now!", 240, 1);
			break;
		case 2248:
			displayText(3, "\aNot bad for my impostor.", 160, 1);
			break;
		case 2249:
			displayText(3, "\aI'm just about done playing around!\nLet's go!", 240, 1);
			break;
		case 2250:
			displayText(3, "\aIt's not over yet, Shadow!", 100, 1);
			break;
		case 2252:
			displayText(3, "\aDarn! It's hopeless...!", 160, 1);
			break;
		case 2254:
			displayText(3, "\aI'll take your technique!", 100, 1);
			break;
		case 2255:
			displayText(3, "\aChaos... Control!", 120, 1);
			break;
		case 2259:
			displayText(3, "\aEggman! I won't let\nyou cause trouble!", 200, 1);
			break;
		case 2261:
			displayText(3, "\aOw!... Darn it, Eggman!", 240, 1);
			break;
		case 2263:
			displayText(3, "\aVulcan Cannon, fire!", 60, 1);
			break;
		case 2264:
			displayText(3, "\aOugh! I'm mad now!", 160, 1);
			break;
		case 2265:
			displayText(3, "\aAaahh! But I was so close!", 140, 1);
			break;
		case 2270:
			displayText(3, "\aHow could you... How could you do that to\nSonic... I'll never forgive you for this!", 300, 1);
			break;
		case 2271:
			displayText(3, "\aOw!... Darn! I'm giving it my all now!", 180, 1);
			break;
		case 2272:
			displayText(3, "\aUgh!... I won't...\nI absolutely won't lose!", 260, 1);
			break;
		case 2273:
			displayText(3, "\aI'm sorry... Sonic...", 140, 1);
			break;
		case 2274:
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aI'll show you the true\npower of the Cyclone!");
				WaitFrameIntro = 1;
			}
			else
			{
				displayText(3, "\aI'll show you the true\npower of the Cyclone!", 120, 1);
			}
			break;
		case 2275:
			displayText(3, "\aTake this!!", 60, 1);
			break;
		case 2276:
			displayText(3, "\aIt's not over yet, Eggman!", 120, 1);
			break;
		case 2284://Rouge Alt Intro
			if (TwoPlayerMode)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aIt's nice to have these kinds\nof things once in a while.");
				WaitFrameIntro = 1;
			}
			else
			{
				displayText(3, "\aIt's nice to use these kinds\nof things once in a while.", 100, 1);
			}
			break;
		case 1480:
			displayText(3, "\aHow could the Master Emerald pieces\nend up in a place like this...?", 230, 1);
			break;
		case 1481:
			displayText(3, "\aI should make good use of\nthe different water levels.", 120, 1);
			break;
		case 1695:
			displayText(3, "\aAlright, Cyclone engaged!", 100, 1);
			break;
		case 1739:
			displayText(3, "\aGood job on making it this far, Sonic!\nHowever, once you've entered this room,\nyou'll never be able to come back alive!", 600, 1);
			break;

			//OMOCHAO BULLY LINES

		//case 1349:
			//displayText(3, "\aOuch!", 30, 1);
			//break;
		//case 1350:
			//displayText(3, "\aOof!", 30, 1);
			//break;
		//case 1351:
			//displayText(3, "\aHuh!?", 30, 1);
			//break;
		//case 1352:
			//displayText(3, "\aOugh!", 100, 1);
			//break;
		case 1353:
			strcpy_s(TextBuffer, "\aT-That hurt... Why are bullying me?\nI'm not doing anything wrong...\nI'm done with this... I'm going home.");
			WaitFrameOmochao = 1;
			break;
		case 1354:
			strcpy_s(TextBuffer, "\aIt hurts! That hurt a lot! I'm angry!\nI'm no longer gonna teach you anything!\nHumph!");
			WaitFrameOmochao = 1;
			break;
		case 1355:
			strcpy_s(TextBuffer, "\aOuch.... Seriously, what are you doing?\nI can't believe you did this.\nI guess looks can be deceiving.");
			WaitFrameOmochao = 1;
			break;
		case 1356:
			strcpy_s(TextBuffer, "\aW-What!? What happened?\nWho am I? Where am I?");
			WaitFrameOmochao = 1;
			break;
		case 1357:
			strcpy_s(TextBuffer, "\aAhh! Stop it! Let me go!");
			WaitFrameOmochao = 1;
			break;
		case 1358:
			strcpy_s(TextBuffer, "\aWow, hey! Stop with that!");
			WaitFrameOmochao = 1;
			break;
		case 1359:
			strcpy_s(TextBuffer, "\aPlease! Please let me go!");
			WaitFrameOmochao = 1;
			break;
		case 1360:
			strcpy_s(TextBuffer, "\aWhat are you doing!? I don't taste good\nregardless if I'm boiled or toasted!");
			WaitFrameOmochao = 1;
			break;
		case 1361:
			strcpy_s(TextBuffer, "\aAh! Hey! Somebody help me!");
			WaitFrameOmochao = 1;
			break;
		case 1362:
			strcpy_s(TextBuffer, "\aI-I'm here to give hints to you!\nI'm not the enemy!");
			WaitFrameOmochao = 1;
			break;
		case 1363:
			strcpy_s(TextBuffer, "\aSorry, my bad! I get it!\nI won't wet my bed anymore!");
			WaitFrameOmochao = 1;
			break;
		case 1364:
			strcpy_s(TextBuffer, "\aC-Could you stop with this thing of\nthrowing me to destroy the enemy?");
			WaitFrameOmochao = 1;
			break;
		case 1365:
			strcpy_s(TextBuffer, "\aS-Somebody! Somebody help!\nI'm being kidnapped!!");
			WaitFrameOmochao = 1;
			break;
		case 1366:
			strcpy_s(TextBuffer, "\aI'll get angry if you don't stop\nwith that! I'm gonna tell mommy!");
			WaitFrameOmochao = 1;
			break;
		case 1367:
			strcpy_s(TextBuffer, "\aWhew... Thank goodness...\nThat was unexpected.");
			WaitFrameOmochao = 1;
			break;
		case 1368:
			strcpy_s(TextBuffer, "\aEnough of this! What's this all\nabout!? I won't forgive you!");
			WaitFrameOmochao = 1;
			break;
		case 1369:
			strcpy_s(TextBuffer, "\aMy goodness, what a surprise.\nI ended up forgetting the hint...");
			WaitFrameOmochao = 1;
			break;
		case 1370:
			strcpy_s(TextBuffer, "\aThanks for hugging me! Even\nthough it was quite rough!");
			WaitFrameOmochao = 1;
			break;
		case 1371:
			strcpy_s(TextBuffer, "\aStoooop!");
			WaitFrameOmochao = 1;
			break;
		//case 1372:
			//strcpy_s(TextBuffer, "\aAhhhh...!");
			//WaitFrameOmochao = 1;
			//break;
		case 1373:
			strcpy_s(TextBuffer, "\aHelp meeee!!");
			WaitFrameOmochao = 1;
			break;
		case 1374:
			strcpy_s(TextBuffer, "\aSee you later...!");
			WaitFrameOmochao = 1;
			break;
			
		case 1389:
			strcpy_s(TextBuffer, "\aHigh, so hiiigh! But this isn't\nthe time to be playing around!");
			WaitFrameOmochao = 1;
			break;
		case 1390:
			strcpy_s(TextBuffer, "\aWow wow wow! That was quite scary!");
			WaitFrameOmochao = 1;
			break;
		case 1391:
			strcpy_s(TextBuffer, "\aWaaaaahh! D-Did I fly!?");
			WaitFrameOmochao = 1;
			break;
		case 1392:
			strcpy_s(TextBuffer, "\aWoohoo! It's like a trampolim!");
			WaitFrameOmochao = 1;
			break;
		case 1393:
			strcpy_s(TextBuffer, "\aWait up, where the heck are\nyou planning to take me to?");
			WaitFrameOmochao = 1;
			break;
		case 1394:
			strcpy_s(TextBuffer, "\aAaaw, how did I end up\nin such place...");
			WaitFrameOmochao = 1;
			break;
		case 1395:
			strcpy_s(TextBuffer, "\aI would love if you\njust let me go home...");
			WaitFrameOmochao = 1;
			break;
		case 1396:
			strcpy_s(TextBuffer, "\aN-No way, are you planning to\nclear the stage like this!?");
			WaitFrameOmochao = 1;
			break;
		case 1397:
			strcpy_s(TextBuffer, "\aOuch...! Even I got damaged!\nHumph!");
			WaitFrameOmochao = 1;
			break;
		case 1398:
			strcpy_s(TextBuffer, "\aOuch ouch... Why even I get\nto go through such thing...?");
			WaitFrameOmochao = 1;
			break;
		case 1399:
			strcpy_s(TextBuffer, "\aB-But I haven't done anything wrong! Y-You're so cruel!");
			WaitFrameOmochao = 1;
			break;
		case 1400:
			strcpy_s(TextBuffer, "\aIt's hurting! Chao Doctor, help me!!");
			WaitFrameOmochao = 1;
			break;
		case 1401:
			strcpy_s(TextBuffer, "\aWhew... That big truck\ngot　me by surprise!");
			WaitFrameOmochao = 1;
			break;
		case 1402:
			strcpy_s(TextBuffer, "\aClearing the stage while holding me...\nGeez, what were you thinking...");
			WaitFrameOmochao = 1;
			break;
		case 1403:
			strcpy_s(TextBuffer, "\aThere is nothing but sea as far as\nthe eyes can see! Where is my home!?");
			WaitFrameOmochao = 1;
			break;
		case 1404:
			strcpy_s(TextBuffer, "\aI'm also escaping before\nthe island blows up!");
			WaitFrameOmochao = 1;
			break;
		case 1405:
			strcpy_s(TextBuffer, "\aThose pumpkin ghosts are scary!");
			WaitFrameOmochao = 1;
			break;
		case 1406:
			strcpy_s(TextBuffer, "\aDid I get rusty after I got wet?");
			WaitFrameOmochao = 1;
			break;
		case 1407:
			strcpy_s(TextBuffer, "\aWow, that was scary. I'll\nget back home and watch TV.");
			WaitFrameOmochao = 1;
			break;
		case 1408:
			strcpy_s(TextBuffer, "\aI-I'm lost! Somebody help me!");
			WaitFrameOmochao = 1;
			break;
		case 1409:
			strcpy_s(TextBuffer, "\aHow can I fly even in space...?\nOh well!");
			WaitFrameOmochao = 1;
			break;
		case 1410:
			strcpy_s(TextBuffer, "\aAnyway, this room kinda\nlooks like a game.");
			WaitFrameOmochao = 1;
			break;
		case 1411:
			strcpy_s(TextBuffer, "\aI'm going back to that planet!\nSee you later!");
			WaitFrameOmochao = 1;
			break;
		case 1412:
			strcpy_s(TextBuffer, "\aWell then, I'll go play\nwith the turtle.");
			WaitFrameOmochao = 1;
			break;
		case 1413:
			strcpy_s(TextBuffer, "\aI-I'm dizzy...");
			WaitFrameOmochao = 1;
			break;
		case 1414:
			strcpy_s(TextBuffer, "\aAlright, I have to go return\nwithout being found by that robot...");
			WaitFrameOmochao = 1;
			break;
		case 1415:
			strcpy_s(TextBuffer, "\aPlease get me out of this safe too!");
			WaitFrameOmochao = 1;
			break;
		case 1416:
			strcpy_s(TextBuffer, "\aThe fog here is like San Francisco's...");
			WaitFrameOmochao = 1;
			break;
		case 1417:
			strcpy_s(TextBuffer, "\aOh, it's already this late!\nI gotta go to the Kindergarden!");
			WaitFrameOmochao = 1;
			break;
		case 1418:
			strcpy_s(TextBuffer, "\aGood children don't lie!");
			WaitFrameOmochao = 1;
			break;
		case 1419:
			strcpy_s(TextBuffer, "\aWith my propeller I can fly\neven in space! ...Why though??");
			WaitFrameOmochao = 1;
			break;
		case 1420:
			strcpy_s(TextBuffer, "\aThis is my first time here!\nI'll go sightseeing!");
			WaitFrameOmochao = 1;
			break;
		case 1421:
			strcpy_s(TextBuffer, "\aOh, my spring is about to run out!\nCould you wind it up on my back?");
			WaitFrameOmochao = 1;
			break;
		case 1422:
			strcpy_s(TextBuffer, "\aOkay, I get it! Whether you want to boil\nme or toast me, do whatever you want!");
			WaitFrameOmochao = 1;
			break;
		case 1423:
			strcpy_s(TextBuffer, "\aIf you don't stop with that I'll tell\nto the Kindergarden's Principal!");
			WaitFrameOmochao = 1;
			break;
		case 1424:
			strcpy_s(TextBuffer, "\aHey, do you know how\nmany of me there are?\nIf you let me go I'll tell you!");
			WaitFrameOmochao = 1;
			break;
			
		case 2663:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aHow does it feel to see Amy Rose\nin all her splendor?");
			WaitFrameIntroAmy = 1;
			break;
		case 2664:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aJust get out of my way!");
			WaitFrameWaza = 1;
			break;
		case 2668:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aYou're not Sonic!\nWho are you?");
			WaitFrameIntroAmy = 1;
			break;
		case 2669:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aCome on! I'm always\nthe odd one out!");
			WaitFrameIntroAmy = 1;
			break;
		case 2670:
			SplitScreenControl = 1;
			displayText(3, "\aWell done!", 180, 1);
			break;
		case 2671:
			displayText(3, "\aI've collected many rings already!", 30, 1);
			break;
		case 2672:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aJust wait a minute.");
			WaitFrameWaza = 1;
			break;
		case 2673:
			SplitScreenControl = 1;
			displayText(3, "\aMy name is Amy Rose!", 180, 1);
			break;
		case 2678:
			SplitScreenControl = 1;
			displayText(3, "\aI did it!", 180, 1);
			break;
		case 2679:
			SplitScreenControl = 1;
			displayText(3, "\aYaaay! I did it!", 180, 1);
			break;
		case 2680:
			SplitScreenControl = 1;
			displayText(3, "\aSee, I can get things\ndone when it needs to!", 180, 1);
			break;
		case 2681:
			SplitScreenControl = 1;
			displayText(3, "\aOh my...! I'm the best!", 180, 1);
			break;
		case 2682:
			SplitScreenControl = 1;
			displayText(3, "\aAhhh... so boring...", 180, 1);
			break;
		case 2683:
			displayText(3, "\aIt's my turn!", 60, 1);
			break;
		case 2684:
			if (Timer < 100)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\aHere I go!");
				WaitFrameIntroAmy = 1;
			}
			else
			{
				displayText(3, "\aHere I go!", 30, 1);
			}
			break;
		case 2685:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI'm getting quite excited!");
			WaitFrameIntroAmy = 1;
			break;
		case 2686:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aSonic... I'll do my best!");
			WaitFrameIntroAmy = 1;
			break;
		case 2689://Chaos Zero Intro
			if (MenuOrGame != 0)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\a");
				WaitFrameIntroChao = 1;
			}
			break;
		case 2699://Chao Walker Intro
			if (MenuOrGame != 0)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\a");
				WaitFrameIntroChao = 1;
			}
			break;
		case 2710://Dark Chao Walker Intro
			if (MenuOrGame != 0)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\a");
				WaitFrameIntroChao = 1;
			}
			break;
		case 2715://Metal Intro
			if (MenuOrGame != 0)
			{
				HudControl = 0;
				SplitScreenControl = 1;
				strcpy_s(TextBuffer, "\a");
				WaitFrameIntroChao = 1;
			}
			break;
		case 2716:
			SplitScreenControl = 1;
			displayText(3, "\aI finally got the emerald.", 180, 1);
			break;
		case 2720:
			displayText(3, "\aHere it is.", 30, 1);
			break;
		case 2721:
			displayText(3, "\aI'm sorry.", 30, 1);
			break;
		case 2722:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aDon't come any closer!");
			WaitFrameWaza = 1;
			break;
		case 2723:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aStop.");
			WaitFrameWaza = 1;
			break;
		case 2724:
			displayText(3, "\aI am Tikal.", 60, 1);
			break;
		case 2725:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI must find the emerald.");
			WaitFrameIntro = 1;
			break;
		case 2726:
			HudControl = 0;
			SplitScreenControl = 1;
			strcpy_s(TextBuffer, "\aI've got to do something...!");
			WaitFrameIntro = 1;
			break;


		}
		return num;
	}

	__declspec(naked) void PlayVoice_r() {
		__asm
		{
			mov eax, [esp + 4]
			push eax
			call randVoice
			add esp, 4
			mov[esp + 0x04], eax
			jmp loc_jmpback

		}
	}


	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		// Executed at startup, contains helperFunctions and the path to your mod (useful for getting the config file.)
		// This is where we override functions, replace static data, etc.
		WriteJump((void*)0x443130, PlayVoice_r);

	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
		//Ippan-tekina intro
			if (WaitFrameIntro > 0)
				if (WaitFrameIntro++ > 121)
				{
					HudControl = 1;
					SplitScreenControl = 2;
					if (CurrentLevel == 15 || CurrentLevel == 39 || CurrentLevel == 45 || CurrentLevel == 48 || CurrentLevel == 53 || CurrentLevel == 58)
					{
						SplitScreenControl = 1;
						HudControl = 0;
					}
					WaitFrameIntro = 0;
				}		
		}
		if (WaitFrameIntro > 1 && WaitFrameIntro < 121)
		{
			displayText(3, TextBuffer, 1, 1);
		}


		//Chao, Metal, Chaos Intro
		if (WaitFrameIntroChao > 0)
		{
			if (WaitFrameIntroChao++ > 121)
			{
				HudControl = 1;
				SplitScreenControl = 2;
				if (CurrentLevel == 15 || CurrentLevel == 39 || CurrentLevel == 45 || CurrentLevel == 48 || CurrentLevel == 53 || CurrentLevel == 58)
				{
					SplitScreenControl = 1;
					HudControl = 0;
				}
				WaitFrameIntroChao = 0;
			}
		}
		if (WaitFrameIntroChao > 1 && WaitFrameIntroChao < 121)
		{
			displayText(5, TextBuffer, 1, 1);
		}
		//Amy Intro
		if (WaitFrameIntroAmy > 0)
		{
			if (WaitFrameIntroAmy++ > 181)
			{
				HudControl = 1;
				SplitScreenControl = 2;
				if (CurrentLevel == 15 || CurrentLevel == 39 || CurrentLevel == 45 || CurrentLevel == 48 || CurrentLevel == 53 || CurrentLevel == 58)
				{
					SplitScreenControl = 1;
					HudControl = 0;
				}
				WaitFrameIntroAmy = 0;
			}		
		}
		if (WaitFrameIntroAmy > 1 && WaitFrameIntroAmy < 181)
		{
			displayText(3, TextBuffer, 1, 1);
		}


		//Waza Knuckles, Rouge, Sonic, Tails, Eggman
			if (WaitFrameWaza > 0)
				if (WaitFrameWaza++ > 64)
				{
					HudControl = 1;
					SplitScreenControl = 2;
					if (CurrentLevel == 15 || CurrentLevel == 39 || CurrentLevel == 45 || CurrentLevel == 48 || CurrentLevel == 53 || CurrentLevel == 58)
					{
						SplitScreenControl = 1;
						HudControl = 0;
					}
					WaitFrameWaza = 0;
				}
		if (WaitFrameWaza > 1 && WaitFrameWaza < 64)
		{
			displayText(3, TextBuffer, 1, 1);
		}

		//Waza Shadow
		if (WaitFrameWaza2 > 0)
			if (WaitFrameWaza2++ > 50)
			{
				HudControl = 1;
				SplitScreenControl = 2;
				if (CurrentLevel == 15 || CurrentLevel == 39 || CurrentLevel == 45 || CurrentLevel == 48 || CurrentLevel == 53 || CurrentLevel == 58)
				{
					SplitScreenControl = 1;
				}
				WaitFrameWaza2 = 0;
			}
		if (WaitFrameWaza2 > 1 && WaitFrameWaza2 < 50)
		{
			displayText(3, TextBuffer, 1, 1);
		}


		//WazaBoss Knuckles, Rouge, Sonic, Tails, Eggman
		if (WaitFrameWaza1P > 0)
			if (WaitFrameWaza1P++ > 64)
			{
				WaitFrameWaza1P = 0;
			}
		if (WaitFrameWaza1P > 1 && WaitFrameWaza1P < 64)
		{
			displayText(3, TextBuffer, 1, 1);
		}
		//Waza Shadow (because animation is faster)
		if (WaitFrameWaza21P > 0)
			if (WaitFrameWaza21P++ > 50)
			{
				WaitFrameWaza21P = 0;
			}
		if (WaitFrameWaza21P > 1 && WaitFrameWaza21P < 50)
		{
			displayText(3, TextBuffer, 1, 1);
		}




		//WaitFrameOmochao Lines
		if (WaitFrameOmochao > 0)
			if (WaitFrameOmochao++ > 180)
			{
				WaitFrameOmochao = 0;
			}
		if (WaitFrameOmochao > 1 && WaitFrameOmochao < 180)
		{
			displayText(3, TextBuffer, 1, 1);
		}

		// Executed every running frame of SA2
	}

	__declspec(dllexport) void __cdecl OnInput()
	{
		// Executed before the game processes input
	}

	__declspec(dllexport) void __cdecl OnControl()
	{
		// Executed when the game processes input
	}

	//__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer }; // This is needed for the Mod Loader to recognize the DLL.
}