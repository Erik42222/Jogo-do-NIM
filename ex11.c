//Jogo do NIM
#include <stdio.h>

int main(void)
{
    int tab,l1,l2,l3;
    printf("Qual a situação do tabuleiro\n");
    scanf("%d",&tab);
    
    l1 = tab/100;
    l2 = (tab - l1 * 100)/10;
    l3 = tab - l1 * 100 - l2 * 10;//Entrada de dados
    
    if (tab == 110 || tab == 101)
        l1 = 0;
    else
    {
        if (l1 == 0 && l2> l3 && l3>2)
            l2 = l2-l3;
        else
        {
            if (l3 == 0 && l2 > l1 && l1 > 2)
                l2 = l2-l1;
            else
            {
                if (l2 == 0 && l3 > l1 && l1 > 2)
                    l3 = l3-l1;
                else
                {
                    if (l1 == 0 && l3 > l2 && l2 > 2)
                        l3 = l3-l2;
                    else
                    {
                        if (tab == 11)
                            l2 = 0;
                        else
                        {
                            if (tab == 7 || tab == 6 || tab == 5 || tab == 4 || tab == 3 || tab == 2)
                                l3 = l3-(l3-1);
                            else
                            {
                                if (tab == 50 || tab == 40 || tab == 30 || tab == 20)
                                    l2 = l2-(l2-1);
                                else
                                {
                                    if (tab == 300 || tab == 200)
                                        l1 = l1-(l1-1);
                                    else
                                    {
                                        if (tab == 220)
                                            l1 = l1-1;
                                        else
                                        {
                                            if (tab == 202)
                                                l1 = l1-1;
                                            else
                                            {
                                                if (tab == 22)
                                                    l2 = l2-1;
                                                else
                                                {
                                                    if (tab == 201 || tab == 210 || tab == 310 || tab == 301)
                                                        l1 = 0;
                                                    else
                                                    {
                                                        if (l2 > 1 && (l1 == 1 || l3 == 1) && (l1 != l3) && l1 <=1 && l3 <= 1)
                                                            l2 = 0;
                                                        else
                                                        {
                                                            if (l3 > 1 && (l2 == 1 || l1 == 1) && (l1 != l2) && l1 <=1 && l2<=1)
                                                                l3 = 0;
                                                            else
                                                            {

                                                                if (tab == 102 || tab == 12)
                                                                    l3 = 0;//Fim dos casos especiais
                                                                else
                                                                {
                                                                    if (((l1-1)^l2^l3) == 0)
                                                                        l1 = l1-1;
                                                                    else
                                                                    {
                                                                        if ((l1^(l2-1)^l3) == 0)
                                                                            l2 = l2-1;
                                                                        else
                                                                        {
                                                                            if ((l1^l2^(l3-1)) == 0)
                                                                                l3 = l3-1;
                                                                            else
                                                                            {
                                                                                if (l3 >1)
                                                                                    l3 = l3-1;
                                                                                else
                                                                                    if (l2 > 1)
                                                                                        l2 = l2-1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d%d%d\n",l1,l2,l3);//Saída de dados
    
    if ((l1 == 1 && l2 == 0 && l3 == 0) || (l1 == 0 && l2 == 1 && l3 == 0) || (l1==0 && l2 == 0 && l3 == 1))
        printf("GG WP\n");
    return 0;
}
