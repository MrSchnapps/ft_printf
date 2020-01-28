#include "includes/ft_printf.h"

int main()
{
    printf("%x", 12);
    /*char *t1 =  "coucoulesamis";
    char *t2 = NULL;
    char c1 = 'a';
    int d1 = 5;
    int d2 = -14;
    int d3 = 15;

    int i1 = 0x25;
    int i2 = 025;
    int i3 = 25;
    
    printf("\n&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&\n");
    printf("&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&\n");
    printf("&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&\n");
    printf("&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&\n");
    printf("&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&*&#&*&\n");
    printf("\n********************************\n");
    printf("******** VRAIE FONCTION ********\n");
    printf("********************************\n");
    printf("t1 ==> |%s|\nt2 ==> |%s|\nP ==> |%p|\nd2 ==> |%d|\n%%\nc ==> |%c|\n", 
        t1, t2, &d1, d2, c1);*/

    /*printf("\n######## %% d ########\n");
    printf("Hexadecimal==> |%d|\n", i1);
    printf("Octal ==> |%d|\n", i2);
    printf("Decimal ==> |%d|\n", i3);
    printf("\n######## %% i ########\n");
    printf("Hexadecimal==> |%i|\n", i1);
    printf("Octal ==> |%i|\n", i2);
    printf("Decimal ==> |%i|\n", i3);
    printf("\n######## %% p ########\n");
    printf("Zone memoire ==> |%p|\n", &d1);
    printf("\n######## %% u ########\n");
    printf("u ==> |%u|\n", -12);
    printf("u ==> |%u|\n", i3);
    
    printf("\n********************************\n");
    printf("********  Ma  Fonction  ********\n");
    printf("********************************\n");
    ft_printf("t1 ==> |%s|\nt2 ==> |%s|\nP ==> |%p|\nd2 ==> |%d|\n%%\nc ==> |%c|\n", 
        t1, t2, &d1, d2, c1);

    printf("\n######## %% d ########\n");
    printf("Hexadecimal==> |%d|\n", i1);
    printf("Octal ==> |%d|\n", i2);
    printf("Decimal ==> |%d|\n", i3);
    printf("\n######## %% i ########\n");
    ft_printf("Hexadecimal==> |%i|\n", i1);
    ft_printf("Octal ==> |%i|\n", i2);
    ft_printf("Decimal ==> |%i|\n", i3);
    printf("\n######## %% p ########\n");
    ft_printf("Zone memoire ==> |%p|\n", &d1);
    printf("\n######## %% u ########\n");
    ft_printf("u ==> |%u|\n", -12);
    ft_printf("u ==> |%u|\n", i3);*/

    /*printf("\n********************************\n");
    printf("********     RETOUR     ********\n");
    printf("********************************\n");
    printf("\nretour ==> |%d|\n", ft_printf("co%s%%%d%i%p%u", t2, i1, i2, &d1, -12));
    printf("\nretour ==> |%d|\n", printf("co%s%%%d%i%p%u", t2, i1, i2, &d1, -12));

    printf("\n************ %%%% ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE     ==> |%%| ==> |%*%| ==> |%20%| ==> |%-*.*%|\n", 5, 5, 5));
    printf("MIENN retour |%d|\n", ft_printf("MIENN     ==> |%%| ==> |%*%| ==> |%20%| ==> |%-*.*%|\n", 5, 5, 5));

    printf("\n************ %% c ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%c|\n", c1));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%c|\n", c1));
    
    printf("\n************ %% s ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%s|\n", "coucoulesamis"));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%s|\n", "coucoulesamis"));

    printf("\n************ %% d ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%d|\n", d1));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%d|\n", d1));

    printf("\n************ %% i ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%i|\n", d2));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%i|\n", d2));

    printf("\n************ %% p ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%p|\n", &d2));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%p|\n", &d2));

    printf("\n************ %% u ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%u|\n", d2));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%u|\n", d2));

    printf("\n************ %% x ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%x|\n", d2));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%x|\n", d2));

    printf("\n************ %% X ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%X|\n", d3));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%X|\n", d3));

    printf("\n************ Melanges ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> pct c|%5c| pct s|%15s| pct p |%p| pcd d |%d| pct i |%i| pct u |%u| pct x |%x| pct X|%X|\n", c1, t1, &d2, d1, d2, d2, d2, d3));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> pct c|%5c| pct s|%15s| pct p |%p| pcd d |%d| pct i |%i| pct u |%u| pct x |%x| pct X|%X|\n", c1, t1, &d2, d1, d2, d2, d2, d3));
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> pct c|%c| pct s|%s| pct p |%p| pcd d |%d| pct i |%i| pct u |%u| pct x |%x| pct X|%X|\n", c1, NULL, &d2, 0, 0, 0, 0, 0));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> pct c|%c| pct s|%s| pct p |%p| pcd d |%d| pct i |%i| pct u |%u| pct x |%x| pct X|%X|\n", c1, NULL, &d2, 0, 0, 0, 0, 0));   

    printf("\n************ FLAG '*' ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%90.*%|\n", 23));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%0*d|\n", 23, d2));
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%*s|\n", 23, t1));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%*s|\n", 23, t1));

    printf("\n************ FLAG '-' ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%6.d|\n", 12345));
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%-*s|\n", 23, t1));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%-*s|\n", 23, t1));

    printf("\n************ FLAG '-' ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%20.20s|\n", t1));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%20.20s|\n", t1));
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%26.X|\n", d3));
    printf("MIENN retour |%d|\n", ft_printf("MIENN           ==> |%26.X|\n", d3));
    int nb = 5;
    printf("\n************ FLAGS ************\n");
    printf("VRAIE retour |%d|\n", printf("VRAIE           ==> |%.d|\n", nb));
    int number    =  -5;
    char *pointer = "little";
    printf("Here is a number-%4d-and a-%10s-word.\n", number, pointer);
    printf("---|%*d|----\n", 5, number);
    printf("VRAIE retour |%d|\n", printf("|%00*.131%|\n", -128));
    printf("MIENN retour |%d|\n", ft_printf("|%00*.131%|\n", -128));
    printf("VRAIE retour |%d|\n", printf("%020d\n", 15));
    printf("MIENN retour |%d|\n", ft_printf("%020d\n", -15));
    printf("VRAIE retour |%d|\n", printf("VRAIE retour      |%7d|\n", -54));
    printf("MIENN retour |%d|\n", ft_printf("MIENN retour      |%7d|\n", -54));
    printf("VRAIE retour |%d|\n", printf("%20.7s\n", "hello"));
    printf("MIENN retour |%d|\n", ft_printf("%020.7s\n", "hello"));
    printf("VRAIE retour |%d|\n", printf("|%--48.137u%-32.124x%-170.173x%-124c|\n" , 2695529888u, 431263843u, 554748715u,31));
    printf("MIENN retour |%d|\n", ft_printf("|%--48.137u%-32.124x%-170.173x%-124c|\n" ,2695529888u, 431263843u, 554748715u,31));
    printf("VRAIE retour |%d|\n", printf("{%.*s}\n", -1, "42"));
    printf("MIENN retour |%d|\n", ft_printf("{%.*s}\n", -1, "42"));
    printf("VRAIE retour |%d|\n", printf("{%09.*u}\n", -2, 42));
    printf("MIENN retour |%d|\n", ft_printf("{%09.*u}\n", -2, 42));
    printf("VRAIE retour |%d|\n", printf("|%-1.*c|\n", -15, 'a'));
    printf("MIENN retour |%d|\n", ft_printf("|%-1.*c|\n", -15, 'a'));*/
    //printf("VRAIE retour |%d|\n", printf("|%00124.128i%-126p%00011.167d%-1.*s%-*.122s|" ,-937015043,(void*)8174823922222033080lu,-1077061366,-40,"",8,"E.nF/X"));
    //printf("MIENN retour |%d|\n", ft_printf("|%00124.128i%-126p%00011.167d%-1.*s%-*.122s|" ,-937015043,(void*)8174823922222033080lu,-1077061366,-40,"",8,"E.nF/X"));
}