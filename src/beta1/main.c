#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*以下乃计算判断性函数，用来进行功能性判断，通过返回值判断语言
The following is a computational judgment function for functional judgment, which is used to judge the language by returning a value*/
int language(unsigned int a);
int language(unsigned int a)
{
    unsigned int c;
    if (a == 1)
    {
        c = a;
    }
    else if (a == 2)
    {
        c = a;
    }
    else if (a < 1 && a > 2 && a != 1)
    {
        c = a;
    }
    return c;
}

/*以下乃功能性函数，包含system函数调用shell命令
The following is a functional function that contains the system function call shell command*/

/*此乃清空屏幕的指令
This is an instruction to empty the screen*/
void cls(void);
void cls(void)
{
    system("clear");
}

/*了解系统版本的函数
Learn about system versions of functions*/
void about_system(void);
void about_system(void)
{
    system("lsb_release -a && screenfetch");
}

/*了解软件版本的函数
Learn about software versions of functions*/
void about_software(void);
void about_software(void)
{
    printf("version:1.0_0.1_public_beta1\n");
}

/*用来等待时间的函数
The function used to wait time*/
void wait_time(void);
void wait_time(void)
{
    sleep(2);
}

/*搜索软件包的函数
Search for functions for packages*/
void package_search_Chinese(void);
void package_search_Chinese(void)
{
    char search[255];
    char package_name[255];
    printf("搜索：");
    scanf("%s",package_name);
    sprintf(search, "apt search %s", package_name);
    system(search);
}

void package_search_English(void);
void package_search_English(void)
{
    char search[255];
    char package_name[255];
    printf("Search:");
    scanf("%s",package_name);
    sprintf(search, "apt search %s", package_name);
    system(search);
}

/*安装软件包的函数
The function that installs the package*/
void install_package_Chinese(void);
void install_package_Chinese(void)
{
    char select_name[255];
    char install_packages[255];
    printf("输入你想安装的软件包名称：");
    scanf("%s",select_name);
    printf("\n");
    printf("两秒后安装软件\n");
    sleep(2);
    system("clear");
    sprintf(install_packages, "sudo apt install %s", select_name);
    system(install_packages);
}

void install_package_English(void);
void install_package_English(void)
{
    char select_name[255];
    char install_packages[255];
    printf("Please enter the name of the package you want to install:");
    scanf("%s",select_name);
    printf("\n");
    printf("Install the software in tow seconds!\n");
    sleep(2);
    system("clear");
    sprintf(install_packages, "sudo apt install %s", select_name);
    system(install_packages);
}

/*添加软件仓库的函数
Add a function for the software repository*/
void add_warehouse_English(void);
void add_warehouse_English(void)
{
    char url_list[255];
    char add_url[255];
    printf("Please enter the URL type：(For example：https://mirrors.bfsu.edu.cn/ubuntu focal[Version code] main[Warehouse type])");
    scanf("%s",url_list);
    printf("\n");
    sprintf(add_url, "sudo apt-add-repository '%s'", url_list);
    printf("\n");
    printf("Adding...\n");
    system(add_url);
}

void add_warehouse_Chinese(void);
void add_warehouse_Chinese(void)
{
    char url_list[255];
    char add_url[255];
    printf("请输入url类型：(例如：https://mirrors.bfsu.edu.cn/ubuntu focal[版本号] main[仓库类型])");
    scanf("%s",url_list);
    printf("\n");
    sprintf(add_url, "sudo apt-add-repository '%s'", url_list);
    printf("\n");
    printf("添加中...\n");
    system(add_url);
}

/*以下是实现菜单功能的函数
The following are functions that implement menu functionality*/
void menu_main_Chinese(void);
void menu_main_Chinese(void)
{
    printf("\n\
    =================================\n\
    *             菜单              *\n\
    =================================\n\
    *1.系统信息                     *\n\
    =================================\n\
    *2.软件管理                     *\n\
    =================================\n\
    *3.关于软件                     *\n\
    =================================\n\
    *4.退出软件                     *\n\
    =================================\n\
    选择输入下去吧:");
}

void menu_main_English(void);
void menu_main_English(void)
{
     printf("\n\
    =================================\n\
    *              menu             *\n\
    =================================\n\
    *1.System information           *\n\
    =================================\n\
    *2.Software management          *\n\
    =================================\n\
    *3.About the software           *\n\
    =================================\n\
    *4.Exit the software            *\n\
    =================================\n\
    Choose to enter it:");
}

void menu_select_languages(void);
void menu_select_languages(void)
{
    printf("\n\
    1.Chinese\n\
    2.English\n");
}

void menu_software_user_Chinese();
void menu_software_user_Chinese()
{
    printf("\n\
    ==================================\n\
    +             软件管理           +\n\
    ==================================\n\
    1.刷新仓库                        \n\
    ==================================\n\
    2.安装软件                        \n\
    ==================================\n\
    3.更新系统                        \n\
    ==================================\n\
    4.添加软件仓库                    \n\
    ==================================\n\
    5.返回菜单                        \n\
    ==================================\n\
    选择输入下去吧:");
}

void menu_software_user_English();
void menu_software_user_English()
{
    printf("\n\
    ==================================\n\
    +       Software management      +\n\
    ==================================\n\
    1.Refresh the sotfware warehouse  \n\
    ==================================\n\
    2.Install the software            \n\
    ==================================\n\
    3.Update system                   \n\
    ==================================\n\
    4.Add software warehouse          \n\
    ==================================\n\
    5.Back to menu                    \n\
    ==================================\n\
    Choose to enter it:");
}

/*刷新软件仓库的函数
Refresh the function of the software repository*/
void system_ref(void);
void system_ref(void)
{
    system("sudo apt update");
}

/*更新系统的函数
Update the functions of the system*/
void system_dist_upgrade(void);
void system_dist_upgrade(void)
{
    system("sudo apt dist-upgrade");
}

/*以下为代码的正文部分
The following is tje body of the code*/
int main()
{/*语言选择部分
Language selection scetion*/
    unsigned int _key_a, _scanf_a;
    menu_select_languages();
    printf("请选择你的语言：\n");
    printf("Please select your languages:\n");
    scanf("%d",&_key_a);
    wait_time();
    _scanf_a = language(_key_a);
/*中文部分
Chinese part*/
    while (_scanf_a == language(_key_a))
    {
        if (_scanf_a == 1)
        {
            unsigned int _key_a1, _scanf_a1;
            menu_main_Chinese();
            scanf("%d",&_key_a1);
            _scanf_a1 = _key_a1;
            while (_scanf_a1 == _key_a1)
            {
                if (_scanf_a1 == 4)
                {
                    goto EXIT_PROGRAM;
                }
                else if (_scanf_a1 == 1)
                {
                    cls();
                    about_system();
                    wait_time();
                    printf("按回车继续:");
                    char _enter_ch = getchar();
                    while (_enter_ch == getchar())
                    if (_enter_ch == '\n')
                    {
                        break;
                    }
                    else
                    {
                        printf("按回车继续:");
                        char _enter_ch = getchar();
                    }
                    cls();
                    menu_main_Chinese();
                    scanf("%d",&_key_a1);
                    _scanf_a1 = _key_a1;
                }
                else if (_scanf_a1 == 2)
                {
                    unsigned int _key_a2, _scanf_a2;
                    menu_software_user_Chinese();
                    scanf("%d",&_key_a2);
                    _scanf_a2 = _key_a2;
                    while (_scanf_a2 == _key_a2)
                    {
                        if (_scanf_a2 == 5)
                        {
                            cls();
                            break;
                        }
                        else if (_scanf_a2 == 1)
                        {
                            cls();
                            system_ref();
                            wait_time();
                            cls();
                            menu_software_user_Chinese();
                            scanf("%d",&_key_a2);
                            _scanf_a2 = _key_a2;
                        }
                        else if (_scanf_a2 == 2)
                        {
                            cls();
                            package_search_Chinese();
                            wait_time();
                            install_package_Chinese();
                            wait_time();
                            printf("按回车继续:");
                            char _enter_ch = getchar();
                            while (_enter_ch == getchar())
                            if (_enter_ch == '\n')
                            {
                                cls();
                                break;
                            }
                            else
                            {
                                printf("按回车继续:");
                                char _enter_ch = getchar();
                            }
                        menu_software_user_Chinese();
                        scanf("%d",&_key_a2);
                        _scanf_a2 = _key_a2; 
                        }
                        else if (_scanf_a2 == 3)
                        {
                            cls();
                            system_dist_upgrade();
                            wait_time();
                            printf("按回车继续:");
                            char _enter_ch = getchar();
                            while (_enter_ch == getchar())
                            if (_enter_ch == '\n')
                            {
                                cls();
                                break;
                            }
                            else
                            {
                                printf("按回车继续:");
                                char _enter_ch = getchar();
                            }                       
                        menu_software_user_Chinese();
                        scanf("%d",&_key_a2);
                        _scanf_a2 = _key_a2; 
                        }
                        else if (_scanf_a2 == 4)
                        {
                            cls();
                            add_warehouse_Chinese();
                            wait_time();
                            printf("按回车继续:");
                            char _enter_ch = getchar();
                            while (_enter_ch == getchar())
                            if (_enter_ch == '\n')
                            {
                                cls();
                                break;
                            }
                            else
                            {
                                printf("按回车继续:");
                                char _enter_ch = getchar();
                            }         
                        menu_software_user_Chinese();
                        scanf("%d",&_key_a2);
                        _scanf_a2 = _key_a2;
                        }
                    }
                    menu_main_Chinese();
                    scanf("%d",&_key_a1);
                    _scanf_a1 = _key_a1;
                }
                else if (_scanf_a1 == 3)
                {
                    cls();
                    about_software();
                    wait_time();
                    printf("按回车继续:");
                    char _enter_ch1 = getchar();
                    while (_enter_ch1 == getchar())
                    if (_enter_ch1 == '\n')
                    {
                        cls();
                        break;
                    }
                    else
                    {
                        printf("按回车继续:");
                        char _enter_ch1 = getchar();
                    }
                    menu_main_Chinese();
                    scanf("%d",&_key_a1);
                    _scanf_a1 = _key_a1;
                }
                else if (_scanf_a1 == 4)
                {
                    goto EXIT_PROGRAM;
                }
            }   
        }
/*英语部分
English Part*/
        else if (_scanf_a == 2)
        {
            unsigned int _key_b1, _scanf_b1;
            menu_main_English();
            scanf("%d",&_key_b1);
            _scanf_b1 = _key_b1;
            while (_scanf_b1 == _key_b1)
            {
                if (_scanf_b1 == 4)
                {
                    goto EXIT_PROGRAM;
                }
                else if (_scanf_b1 == 1)
                {
                    cls();
                    about_system();
                    wait_time();
                    printf("Press enter to continue:");
                    char _enter_ch = getchar();
                    while (_enter_ch == getchar())
                    if (_enter_ch == '\n')
                    {
                        cls();
                        break;
                    }
                    else
                    {
                        printf("Press enter to continue:");
                        char _enter_ch = getchar();
                    }
                    menu_main_English();
                    scanf("%d",&_key_b1);
                    _scanf_b1 = _key_b1;
                }
                else if (_scanf_b1 == 2)
                {
                    unsigned int _key_b2, _scanf_b2;
                    menu_software_user_English();
                    scanf("%d",&_key_b2);
                    _scanf_b2 = _key_b2;
                    while (_scanf_b2 == _key_b2)
                    {
                        if (_scanf_b2 == 5)
                        {
                            cls();
                            break;
                        }
                        else if (_scanf_b2 == 1)
                        {
                            cls();
                            system_ref();
                            wait_time();
                            cls();
                            menu_software_user_English();
                            scanf("%d",&_key_b2);
                            _scanf_b2 = _key_b2;
                        }
                        else if (_scanf_b2 == 2)
                        {
                            cls();
                            package_search_English();
                            wait_time();
                            install_package_English();
                            wait_time();
                            printf("Press enter to continue:");
                            char _enter_ch = getchar();
                            while (_enter_ch == getchar())
                            if (_enter_ch == '\n')
                            {
                                cls();
                                break;
                            }
                            else
                            {
                                printf("Press enter to continue:");
                                char _enter_ch = getchar();
                            }
                        menu_software_user_English();
                        scanf("%d",&_key_b2);
                        _scanf_b2 = _key_b2; 
                        }
                        else if (_scanf_b2 == 3)
                        {
                            cls();
                            system_dist_upgrade();
                            wait_time();
                            printf("Press enter to continue:");
                            char _enter_ch = getchar();
                            while (_enter_ch == getchar())
                            if (_enter_ch == '\n')
                            {
                                cls();
                                break;
                            }
                            else
                            {
                                printf("Press enter to continue:");
                                char _enter_ch = getchar();
                            }
                        menu_software_user_English();
                        scanf("%d",&_key_b2);
                        _scanf_b2 = _key_b2; 
                        }
                        else if (_scanf_b2 == 4)
                        {
                            cls();
                            add_warehouse_English();
                            wait_time();
                            printf("Press enter to continue:");
                            char _enter_ch = getchar();
                            while (_enter_ch == getchar())
                            if (_enter_ch == '\n')
                            {
                                cls();
                                break;
                            }
                            else
                            {
                                printf("Press enter to continue:");
                                char _enter_ch = getchar();
                            }
                        menu_software_user_English();
                        scanf("%d",&_key_b2);
                        _scanf_b2 = _key_b2;
                        }
                    }
                    menu_main_English();
                    scanf("%d",&_key_b1);
                    _scanf_b1 = _key_b1;
                }
                else if (_scanf_b1 == 3)
                {
                    cls();
                    about_software();
                    wait_time();
                    printf("Press enter to continue:");
                    char _enter_ch1 = getchar();
                    while (_enter_ch1 == getchar())
                    if (_enter_ch1 == '\n')
                    {
                        cls();
                        break;
                    }
                    else
                    {
                        printf("Press enter to continue:");
                        char _enter_ch1 = getchar();
                    }
                    menu_main_English();
                    scanf("%d",&_key_b1);
                    _scanf_b1 = _key_b1;
                }
                else if  (_scanf_b1 == 4)
                {
                    goto EXIT_PROGRAM;
                }
            }
        }
    }
EXIT_PROGRAM:printf("Good Bye! Everyone!\n");sleep(2);cls();return 0;
}
