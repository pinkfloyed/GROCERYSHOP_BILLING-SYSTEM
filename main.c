#include<stdio.h>
int main()
{
    char customer_name[200];
    int customer_phonenumber,customer_id,dateofbirth,hair_cream,hair_spray,body_spray,body_soap;
    int sugar,tea,coffee,rice,wheat,bread,FrozenFoods,oils;
    int pepsi,sprite,coke,mojo,clemon;
    int total,cosmetics_total,grocery_total,beverage_total;

    printf("-------------------------------\n");
    printf("GROCERYSHOP_BILLING SYSTEM\n");
    printf("-------------------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s", &customer_name);
    printf("Customer Number : ");
    scanf("%d", &customer_phonenumber);
    printf("Customer Id : ");
    printf("%d\n", &customer_id);
    printf("Customer Date-Of-Birth : ");
    printf("%d\n", &dateofbirth);

    printf("------------------------\n");

    printf("COSMETICS\n\n");

	printf("Body Spray (550 Taka) : ");
    scanf("%d", &body_spray);
    printf("Hair Cream (500 Taka) : ");
    scanf("%d", &hair_cream);
    printf("Hair Spray (700 Taka) : ");
    scanf("%d", &hair_spray);
    printf("Body Soap (650 Taka) : ");
    scanf("%d", &body_soap);


    printf("------------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar (500 Taka) : ");
    scanf("%d", &sugar);
    printf("Tea (400 Taka) : ");
    scanf("%d", &tea);
    printf("Coffee (50 Taka) : ");
    scanf("%d", &coffee);
    printf("Rice (200 Taka) : ");
    scanf("%d", &rice);
    printf("Wheat (200 Taka) : ");
    scanf("%d", &wheat);
    printf("Bread (120 Taka) : ");
    scanf("%d", &bread);
    printf("Frozen Foods (360 Taka) : ");
    scanf("%d", &FrozenFoods);
    printf("Oils (220 Taka) : ");
    scanf("%d", &oils);

    printf("------------------------\n");

    printf("BEVERAGES\n\n");

    printf("PEPSI (130 Taka) : ");
    scanf("%d", &pepsi);
    printf("SPRITE (120 Taka) : ");
    scanf("%d", &sprite);
    printf("COKE (135 Taka) : ");
    scanf("%d", &coke);
    printf("MOJO (80 Taka) : ");
    scanf("%d", &mojo);
    printf("CLEMON (100 Taka) : ");
    scanf("%d", &clemon );

    printf("------------------------\n");

    int bs,hc,hs,bosp;

    bs = 10*body_soap;
    hc = 25*hair_cream;
    hs = 50*hair_spray;
    bosp = 50*body_spray;
    cosmetics_total = bs + hc + hs + bosp;

    printf("Body Soap : ");
    printf("%d TAKA\n", bs);
    printf("Hair Cream : ");
    printf("%d TAKA\n", hc);
    printf("Hair Spray : ");
    printf("%d TAKA\n", hs);
    printf("Body Spray : ");
    printf("%d TAKA\n", bosp);
    printf("Total Cosmetics Price : ");
    printf("%d TAKA\n", cosmetics_total);

    printf("------------------------\n");

    int s,t,c,r,w,b,f,o;

    s = 100*sugar;
    t = 15*tea;
    c = 50*coffee;
    r = 150*rice;
    w = 160*wheat;
    b = 20*bread;
    f = 10*FrozenFoods;
    o = 100*oils;
    grocery_total = s+t+c+r+w+b+f+o;

    printf ("Sugar : ");
    printf ("%d TAKA\n", s);
    printf("Tea : ");
    printf("%d TAKA\n", t);
    printf ("Coffee : ");
    printf ("%d TAKA\n", c);
    printf("Rice : ");
    printf("%d TAKA\n", r);
    printf("Wheat : ");
    printf("%d TAKA\n", w);
    printf("Bread : ");
    printf("%d TAKA\n", b);
    printf("Frozen Foods : ");
    printf("%d TAKA\n", f);
    printf("Oils : ");
    printf("%d TAKA\n", o);
    printf ("Total Grocery Price : ");
    printf("%d TAKA\n", grocery_total);

    printf("------------------------\n");

    int pep,spr,cok,moj,thu;

    pep = 30*pepsi;
    spr = 35*sprite;
    cok = 30*coke;
    moj = 25*mojo;
    thu = 35*clemon;
    beverage_total = pep+spr+cok+moj+thu;

    printf("Pepsi : ");
    printf("%d TAKA\n", pep);
    printf ("Sprite : ");
    printf("%d TAKA\n", spr);
    printf("Coke : ");
    printf("%d TAKA\n", cok);
    printf("Mojo : ");
    printf ("%d TAKA\n", moj);
    printf ("Clemon : ");
    printf ("%d TAKA\n", thu);
    printf ("Total Beverage Price : ");
    printf("%d TAKA\n", beverage_total);

    printf ("----------------------\n");

    total = cosmetics_total + grocery_total + beverage_total;

    printf ("Total Amount : ");
    printf("%d TAKA\n", total);

    printf ("------------------------\n\n");

    printf("----------------------------------------------------------------------------------------\n\n");

    printf("             GROCERYSHOP_BILLINGSYSTEM\n\n");

    printf("Customer Name : ");
    printf("%s\n", customer_name);
    printf("Customer Phone Number : ");
    printf("%d\n", customer_phonenumber);
    printf("Customer Id : ");
    printf("%d\n", &customer_id);
     printf("Customer Date-Of-Birth : ");
    printf("%d\n", &dateofbirth);

    printf("Product Name                     Quantity                      Price\n\n");
    printf("Body Soap                        %d                            %d\n", body_soap,bs);
    printf("Hair Cream                       %d                            %d\n", hair_cream,hc);
    printf("Body Spray                       %d                            %d\n", body_spray,bosp);
    printf("Hair Spray                       %d                            %d\n", hair_spray,hs);
    printf("Sugar                            %d                            %d\n", sugar,s);
    printf("Tea                              %d                            %d\n", tea,t);
    printf("Coffee                           %d                            %d\n", coffee,c);
    printf("Rice                             %d                            %d\n", rice,r);
    printf("Wheat                            %d                            %d\n", wheat,w);
    printf("Bread                            %d                            %d\n", wheat,b);
    printf("Frozen Foods                     %d                            %d\n", wheat,f);
    printf("Oils                             %d                            %d\n", wheat,o);
    printf("Pepsi                            %d                            %d\n", pepsi,pep);
    printf("Sprite                           %d                            %d\n", sprite,spr);
    printf("Coke                             %d                            %d\n", coke,cok);
    printf("MojO                             %d                            %d\n", mojo,moj);
    printf("Clemon                           %d                            %d\n\n",clemon,thu);

    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetic Total Price : %d\n\n", cosmetics_total);

    printf("Beverage Total Price : %d\n\n", beverage_total);

    printf("Total Price : %d\n\n", total);

    printf("----------------------------------------------------------------------------------------------\n");

   return 0;
}
