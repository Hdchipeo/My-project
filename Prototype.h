void gotoxy(int x,int y);
void ShowCur(WINBOOL CursorVisibility);
void SetColor(int backgound_color, int text_color);
void ClrTable(int x0,int y0,int x,int y);
void DrawBird(int x,int y);
void DrawBird2(int x,int y);
void DrawBird3(int x,int y);
void RemoteBird();
void DrawPoint(int x,int y);
void DrawPoint2(int a,int b,HANDLE Tab);
void ClrPoint(int x,int y);
void ClrLine(int x1,int x2,int yline,int Color);
void ClrLine2(int x1,int x2,int yline,int Color);
void DrawLine(int x1,int x2,int yline,int Color);
void DrawTable(int x1,int y1,int x2,int y2,int ColorRear,int ColorMain);
void DrawTable2(int x1,int y1,int x2,int y2,int ColorRear,int ColorMain );
void DrawTableRoad(int x1,int y1,int x2,int y2,int ColorRear,int ColorMain);
void DrawWall(int Wallx,int Wally,int Button);
void ClrWall(int Wallx,int Wally,int Button);
void ClrWall2(int Wallx,int Wally,int Button);
void ClrWallButton(int Wallx,int Button);
void SetWindowBufferSize(int a,int b,HANDLE Tab);
void* Bird(void* arg);
void* Wall1(void* arg);
void* Wall2(void* arg);
void* Wall3(void* arg);


void Condition(int Wallx,int Wally,int WallButton);
void DrawTableWall(int x1,int y1,int x2,int y2,int ColorRear,int ColorMain);
void DrawlineSpace(int x1,int x2,int yline);
void DrawCloud();
void DrawScores();

int GetRandom(int MIN,int MAX,unsigned int *seed);//Hàm lấy random.
void SetWindowSize(short width, short height,HANDLE to);
int rand_r (unsigned int *seed);

void PrintNumber(int Number);
void ShowCur2(WINBOOL CursorVisibility);
void DrawLine2(int x1,int x2,int yline,int Color);
void DrawTableRoad2(int x1,int y1,int x2,int y2,int ColorRear,int ColorMain);
void DrawlineSpace2(int x1,int x2,int yline);
void ScrollWall();
void ClrRow(int x1,int x2,int y1,int y2);
void ClrWall3(int Wallx,int Wally,int WallButton);
void ClrBird(int Birdx,int Birdy);
void Delay(int ms);
void TextMain();
void DrawRow(int x1,int x2,int y1,int y2);
void ShowCurTab(WINBOOL CursorVisibility,HANDLE Tab);
void CopyPixelTo(int x1,int y1,int x2,int y2,int x3,int y3,HANDLE To);
void PlayArt(int x1,int y1);
void TopArt(int x1,int y1);
void MouseEventProc(MOUSE_EVENT_RECORD mer);
void KeyEventProc(KEY_EVENT_RECORD ker);
void* EventCheck(void* arg);
void SetColorRGB(int r,int g,int b);
void DrawLine3(int x1,int x2,int yline);
void DrawTable3(int x1,int y1,int x2,int y2,int rRear,int gRear,int bRear,int rMain,int gMain,int bMain);
void GameOverArt(int x1,int y1);
void DrawRow2(int x1,int x2,int y1,int y2);
void *AnimationBird(void* arg);
void* PrintScores(void* arg);
void DrawOverTable();
void DrawCicleOverGame();
void ArtNew();
void ArtMenu();
void ArtOk();
void ArtPause();
void ArtBackGroundGame();
void ArtTree(int a,int b);
void ArtCloud(int a,int b);
void ArtTower(int a,int b);
void CopyPixelTo2(int x1,int y1,int x2,int y2,int x3,int y3,HANDLE From,HANDLE To);
void DrawBird4();
void DrawBird5();
void CopyBirdAction1(int Copy,HANDLE To);
void ClrBird4();
void ClrBird5();
void ClrBirdAction1(int Del,HANDLE To);
void SetParameterWall();
void ArtNumber();
void DrawCoin();
void ArtLoading();
void* DrawLoading(void* arg);
void ArtRestar();
void *CheckParameter(void* arg);
void PrintParameter();
void DelConsole(HANDLE console);
void ResetParameter();
void BirdbMove();
void SetFontSizeTab(HANDLE tab,int width,int height);
void SetTabEditMode(HANDLE tab,int Boolmode);
void SetColorConsole();
void RGBChange();
void DrawPoint3(char Ascii,int a,int b,HANDLE Tab);
void SetColor2(HANDLE tab,int backgound_color, int text_color);
