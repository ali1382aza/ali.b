#include <stdio.h>
#include <stdlib.h>

int n, year, month,totaldays,startingday,m;
char*months[]={"","Farvardin","Ordibehesht","Khordad","Tir","Mordad","Shahrivar","Mehr","Aban","Azar","Dey","Bahman","Esfand"};
char*monthsm[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
char*days_shamsi[]={"","Shanbe","Yekshanbe","Doshanbe","Seshanbe","Charshanbe","Pangshanbe","Jome"};

void conversion();
void menu_asli();
void age();
void menu(){
    printf("[0] Quit\n[1] Calendar\n[2] Age\n[3] Conversion\n");
}
void xat(){
    printf("-------------------------");
}
void select_option(){
    printf("\nSelect Option: ");
}
void back_text(){
    printf("[0] Back to menu");
}
void back_text2(){
    printf("Back to menu!");
}
void invalid_text(){
    printf("Invalid Input!\n");
    xat();
    printf("\n");
    menu_asli();
}
void calendar2(int month){
        printf("Enter Year:");
        scanf("%d",&year);
        if (year==0){
            system("cls");
            back_text2();
            printf("\n");
            xat();
            printf("\n");
            menu_asli();
            exit(0);
        }
        if (month==0){
            system("cls");
            back_text2();
            printf("\n");
            xat();
            printf("\n");
            menu_asli();
            exit(0);
        }
        

        //محاسبه روز های ماه
        if (month==12){
            if(year==1210 || year==1214 || year==1218 || year==1222 || year==1226 || year==1230 || year==1234 || year==1238 || year==1243
            || year==1247 || year==1251 || year==1255 || year==1259 || year==1263 || year==1267 || year==1271 || year==1276 || year==1280
            || year==1284 || year==1288 || year==1292 || year==1296 || year==1300 || year==1304 || year==1309 || year==1313 || year==1317
            || year==1321 || year==1325 || year==1329 || year==1333 || year==1337 || year==1342 || year==1346 || year==1350 || year==1354
            || year==1358 || year==1362 || year==1366 || year==1370 || year==1375 || year==1379 || year==1383 || year==1387 || year==1391
            || year==1395 || year==1399 || year==1403 || year==1408 || year==1412 || year==1416 || year==1420 || year==1424 || year==1428
            || year==1432 || year==1436 || year==1441 || year==1445 || year==1449 || year==1453 || year==1457 || year==1461 || year==1465
            || year==1469 || year==1474 || year==1478 || year==1482 || year==1486 || year==1490 || year==1494 || year==1498){
                totaldays=30;
            }
            else{
                totaldays=29;
            }
        }
        else if(month==1 || month==2 || month==3 || month==4 || month==5 || month==6){
            totaldays=31;
        }
        else{
            totaldays=30;
        }

        
        m=year-1206;
        startingday=365*(m);
        for(int i=1206;i<year;i++){
            switch(i){

            case 1210:
            startingday+=1;
            break;

            case 1214:
            startingday+=1;
            break;

            case 1218:
            startingday+=1;
            break;

            case 1222:
            startingday+=1;
            break;

            case 1226:
            startingday+=1;
            break;

            case 1230:
            startingday+=1;
            break;
  
            case 1234:
            startingday+=1;
            break;

            case 1238:
            startingday+=1;
            break;

            case 1243:
            startingday+=1;
            break;

            case 1247:
            startingday+=1;
            break;

            case 1251:
            startingday+=1;
            break;

            case 1255:
            startingday+=1;
            break;

            case 1259:
            startingday+=1;
            break;

            case 1263:
            startingday+=1;
            break;

            case 1267:
            startingday+=1;
            break;

            case 1271:
            startingday+=1;
            break;

            case 1276:
            startingday+=1;
            break;

            case 1280:
            startingday+=1;
            break;

            case 1284:
            startingday+=1;
            break;

            case 1288:
            startingday+=1;
            break;

            case 1292:
            startingday+=1;
            break;

            case 1296:
            startingday+=1;
            break;

            case 1300:
            startingday+=1;
            break;

            case 1304:
            startingday+=1;
            break;

            case 1309:
            startingday+=1;
            break;

            case 1313:
            startingday+=1;
            break;

            case 1317:
            startingday+=1;
            break;

            case 1321:
            startingday+=1;
            break;

            case 1325:
            startingday+=1;
            break;

            case 1329:
            startingday+=1;
            break;

            case 1333:
            startingday+=1;
            break;

            case 1337:
            startingday+=1;
            break;

            case 1342:
            startingday+=1;
            break;

            case 1346:
            startingday+=1;
            break;

            case 1350:
            startingday+=1;
            break;

            case 1354:
            startingday+=1;
            break;

            case 1358:
            startingday+=1;
            break;

            case 1362:
            startingday+=1;
            break;

            case 1366:
            startingday+=1;
            break;

            case 1370:
            startingday+=1;
            break;

            case 1375:
            startingday+=1;
            break;

            case 1379:
            startingday+=1;
            break;

            case 1383:
            startingday+=1;
            break;

            case 1387:
            startingday+=1;
            break;

            case 1391:
            startingday+=1;
            break;

            case 1395:
            startingday+=1;
            break;

            case 1399:
            startingday+=1;
            break;

            case 1403:
            startingday+=1;
            break;

            case 1408:
            startingday+=1;
            break;

            case 1412:
            startingday+=1;
            break;

            case 1416:
            startingday+=1;
            break;

            case 1420:
            startingday+=1;
            break;

            case 1424:
            startingday+=1;
            break;

            case 1428:
            startingday+=1;
            break;

            case 1432:
            startingday+=1;
            break;

            case 1436:
            startingday+=1;
            break;

            case 1441:
            startingday+=1;
            break;

            case 1445:
            startingday+=1;
            break;

            case 1449:
            startingday+=1;
            break;

            case 1453:
            startingday+=1;
            break;

            case 1457:
            startingday+=1;
            break;

            case 1461:
            startingday+=1;
            break;

            case 1465:
            startingday+=1;
            break;

            case 1469:
            startingday+=1;
            break;

            case 1474:
            startingday+=1;
            break;

            case 1478:
            startingday+=1;
            break;

            case 1482:
            startingday+=1;
            break;

            case 1486:
            startingday+=1;
            break;

            case 1490:
            startingday+=1;
            break;

            case 1494:
            startingday+=1;
            break;

            case 1498:
            startingday+=1;
            break;
            }
        }  
        for(int i = 0; i < month; i++){
           if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6){
            startingday+=31;
           }
           else if(i==7 || i==8 || i==9 || i==10 || i==11){
            startingday+=30;
           }
        }
        startingday+=5;
        startingday%=7;
        system("cls");
        printf("\n   [ %s ]\n", months[month]);
        printf("SH YE DO SE CH PA JO\n");
    
        for (int i = 0; i < startingday; i++) {
            printf("   ");
        }
        for (int day = 1; day <= totaldays; day++) {
            printf("%2d ", day);
            if ((day + startingday) % 7 == 0 || day == totaldays) {
                printf("\n");
            }
        }
        xat();
        printf("\n");
        back_text();
        printf("\n");
        xat();
        printf("\n");
}
void calendar(){
        printf("Enter Year:");
        scanf("%d",&year);
        if (year==0){
            system("cls");
            back_text2();
            printf("\n");
            xat();
            printf("\n");
            menu_asli();
            exit(0);
        }
        printf("Enter Month:");
        scanf("%d",&month);
        while (month>12){
            printf("Enter Month:");
            scanf("%d",&month);
        }
        if (month==0){
            system("cls");
            back_text2();
            printf("\n");
            xat();
            printf("\n");
            menu_asli();
            exit(0);
        }


        //محاسبه روز های ماه
        if (month==12){
            if(year==1210 || year==1214 || year==1218 || year==1222 || year==1226 || year==1230 || year==1234 || year==1238 || year==1243
            || year==1247 || year==1251 || year==1255 || year==1259 || year==1263 || year==1267 || year==1271 || year==1276 || year==1280
            || year==1284 || year==1288 || year==1292 || year==1296 || year==1300 || year==1304 || year==1309 || year==1313 || year==1317
            || year==1321 || year==1325 || year==1329 || year==1333 || year==1337 || year==1342 || year==1346 || year==1350 || year==1354
            || year==1358 || year==1362 || year==1366 || year==1370 || year==1375 || year==1379 || year==1383 || year==1387 || year==1391
            || year==1395 || year==1399 || year==1403 || year==1408 || year==1412 || year==1416 || year==1420 || year==1424 || year==1428
            || year==1432 || year==1436 || year==1441 || year==1445 || year==1449 || year==1453 || year==1457 || year==1461 || year==1465
            || year==1469 || year==1474 || year==1478 || year==1482 || year==1486 || year==1490 || year==1494 || year==1498){
                totaldays=30;
            }
            else{
                totaldays=29;
            }
        }
        else if(month==1 || month==2 || month==3 || month==4 || month==5 || month==6){
            totaldays=31;
        }
        else{
            totaldays=30;
        }

        
        m=year-1206;
        startingday=365*(m);
        for(int i=1206;i<year;i++){
            switch(i){

            case 1210:
            startingday+=1;
            break;

            case 1214:
            startingday+=1;
            break;

            case 1218:
            startingday+=1;
            break;

            case 1222:
            startingday+=1;
            break;

            case 1226:
            startingday+=1;
            break;

            case 1230:
            startingday+=1;
            break;
  
            case 1234:
            startingday+=1;
            break;

            case 1238:
            startingday+=1;
            break;

            case 1243:
            startingday+=1;
            break;

            case 1247:
            startingday+=1;
            break;

            case 1251:
            startingday+=1;
            break;

            case 1255:
            startingday+=1;
            break;

            case 1259:
            startingday+=1;
            break;

            case 1263:
            startingday+=1;
            break;

            case 1267:
            startingday+=1;
            break;

            case 1271:
            startingday+=1;
            break;

            case 1276:
            startingday+=1;
            break;

            case 1280:
            startingday+=1;
            break;

            case 1284:
            startingday+=1;
            break;

            case 1288:
            startingday+=1;
            break;

            case 1292:
            startingday+=1;
            break;

            case 1296:
            startingday+=1;
            break;

            case 1300:
            startingday+=1;
            break;

            case 1304:
            startingday+=1;
            break;

            case 1309:
            startingday+=1;
            break;

            case 1313:
            startingday+=1;
            break;

            case 1317:
            startingday+=1;
            break;

            case 1321:
            startingday+=1;
            break;

            case 1325:
            startingday+=1;
            break;

            case 1329:
            startingday+=1;
            break;

            case 1333:
            startingday+=1;
            break;

            case 1337:
            startingday+=1;
            break;

            case 1342:
            startingday+=1;
            break;

            case 1346:
            startingday+=1;
            break;

            case 1350:
            startingday+=1;
            break;

            case 1354:
            startingday+=1;
            break;

            case 1358:
            startingday+=1;
            break;

            case 1362:
            startingday+=1;
            break;

            case 1366:
            startingday+=1;
            break;

            case 1370:
            startingday+=1;
            break;

            case 1375:
            startingday+=1;
            break;

            case 1379:
            startingday+=1;
            break;

            case 1383:
            startingday+=1;
            break;

            case 1387:
            startingday+=1;
            break;

            case 1391:
            startingday+=1;
            break;

            case 1395:
            startingday+=1;
            break;

            case 1399:
            startingday+=1;
            break;

            case 1403:
            startingday+=1;
            break;

            case 1408:
            startingday+=1;
            break;

            case 1412:
            startingday+=1;
            break;

            case 1416:
            startingday+=1;
            break;

            case 1420:
            startingday+=1;
            break;

            case 1424:
            startingday+=1;
            break;

            case 1428:
            startingday+=1;
            break;

            case 1432:
            startingday+=1;
            break;

            case 1436:
            startingday+=1;
            break;

            case 1441:
            startingday+=1;
            break;

            case 1445:
            startingday+=1;
            break;

            case 1449:
            startingday+=1;
            break;

            case 1453:
            startingday+=1;
            break;

            case 1457:
            startingday+=1;
            break;

            case 1461:
            startingday+=1;
            break;

            case 1465:
            startingday+=1;
            break;

            case 1469:
            startingday+=1;
            break;

            case 1474:
            startingday+=1;
            break;

            case 1478:
            startingday+=1;
            break;

            case 1482:
            startingday+=1;
            break;

            case 1486:
            startingday+=1;
            break;

            case 1490:
            startingday+=1;
            break;

            case 1494:
            startingday+=1;
            break;

            case 1498:
            startingday+=1;
            break;
            }
        }  
        for(int i = 0; i < month; i++){
           if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6){
            startingday+=31;
           }
           else if(i==7 || i==8 || i==9 || i==10 || i==11){
            startingday+=30;
           }
        }
        startingday+=5;
        startingday%=7;
        system("cls");
        printf("\n   [ %s ]\n", months[month]);
        printf("SH YE DO SE CH PA JO\n");
    
        for (int i = 0; i < startingday; i++) {
            printf("   ");
        }
        for (int day = 1; day <= totaldays; day++) {
            printf("%2d ", day);
            if ((day + startingday) % 7 == 0 || day == totaldays) {
                printf("\n");
            }
        }
        xat();
        printf("\n");
        back_text();
        printf("\n");
        xat();
        printf("\n");
        calendar2(month);
}

void menu_asli(){
    menu();
    xat();
    select_option();
    scanf("%d",&n);
    if (n==0){
        system("cls");
        printf("Bye!");
    }
    else if (n==1){
        system("cls");
        back_text();
        printf("\n");
        xat();
        printf("\n");
        calendar();
        
    }    
    else if (n==2){
        system("cls");
        back_text();
        printf("\n");
        xat();
        printf("\n");
        age();
    }
    else if (n==3){
        system("cls");
        back_text();
        printf("\n");
        xat();
        printf("\n");
        conversion();        
    }
    else{
        system("cls");
        invalid_text();
    }
}



int main(){
    system("cls");
    menu_asli();
    return 0;
}

void age(){
    int now_year=1402 ,now_month=11,now_day=7,day,days=0,months,years,days_shamsi2;
    printf("Enter your birth year:");
    scanf("%d",&year);
    while(year==0){
        system("cls");
        back_text2();
        printf("\n");
        xat();
        printf("\n");
        menu_asli();
        exit(0);
    }
    printf("Enter your birth month:");
    scanf("%d",&month);
    if(month==0){
        system("cls");
        back_text2();
        printf("\n");
        xat();
        printf("\n");
        menu_asli();
        exit(0);
    }
    printf("Enter your birth day:");
    scanf("%d",&day);
    if(day==0){
        system("cls");
        back_text2();
        printf("\n");
        xat();
        printf("\n");
        menu_asli();
        exit(0);
    }
    if(month==1 || month==2 || month==3 || month ==4 || month==5 || month==6){
        days+=(31-day);
    }
    else if(month==7 || month==8 || month==9 || month==10 || month==11){
        days+=(30-day);
    }
    else{
        days+=(29-day);
    }
    if(month!=12){
        for(int i=(month+1);i<=12;i++){

        switch(i){
            case 2:
            days+=31;
            break;

            case 3:
            days+=31;
            break;

            case 4:
            days+=31;
            break;

            case 5:
            days+=31;
            break;

            case 6:
            days+=31;
            break;

            case 7:
            days+=30;
            break;

            case 8:
            days+=30;
            break;

            case 9:
            days+=30;
            break;

            case 10:
            days+=30;
            break;

            case 11:
            days+=30;
            break;

            case 12:
            days+=29;
            break;
        }
        }
    }
    

    days+=(365*(now_year-(year+1)));
    if(now_month!=1){
        for(int i=1;i<now_month;i++){
            if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6){
                days+=31;
            }
            else{
                days+=30;
            }
        }

    }
    days+=now_day;
    months=days/30.41;
    years=days/365;
    days_shamsi2=(days%7)-1;
    system("cls");
    printf("Date of birth: %d/%d/%d",year,month,day);
    printf("\n\n");
    int days2=days;
    int month_a=(days2%365)/30;
    int days_a=((days2%365)%30);
    printf("Years you have lived:%d months:%d days:%d",years,month_a,days_a);
    
    printf("\n");
    printf("Months you have lived:%d",months);
    printf("\n");
    printf("Days you have lived:%d",days);
    printf("\n");
    printf("Name of birthday:%s",days_shamsi[days_shamsi2]);
    printf("\n");
    xat();
    printf("\n");
    back_text();
    printf("\n");
    xat();
    printf("\n");
    age();

}

void conversion(){

    int year,month,day;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year==0){
        system("cls");
        back_text2();
        printf("\n");
        xat();
        printf("\n");
        menu_asli();
        exit(0);
        }
    printf("Enter the month:");
    scanf("%d",&month);
    if (month==0){
        system("cls");
        back_text2();
        printf("\n");
        xat();
        printf("\n");
        menu_asli();
        exit(0);
        }
    printf("Enter the day:");
    scanf("%d",&day);
    if (day==0){
        system("cls");
        back_text2();
        printf("\n");
        xat();
        printf("\n");
        menu_asli();
        exit(0);
        }
    if(month==10){
        if(day>=11){
            year+=622;
        }
        else{
            year+=621;
        }
    }
    else{
        year+=621;
    }

    switch (month)
    {
    case 1:
        if(day<=11){
            month=3;
            day+=20;
        }
        else{
            month=4;
            day-=11;
        }
        break;
    
    case 2:
        if(day<=10){
            month=4;
            day+=20;
        }
        else{
            month=5;
            day-=10;
        }
        break;

    case 3:
        if(day<=10){
            month=5;
            day+=21;
        }
        else{
            month=6;
            day-=10;
        }
        break;
    
    case 4:
        if(day<=9){
            month=6;
            day+=21;
        }
        else{
            month=7;
            day-=9;
        }
        break;

    case 5:
        if(day<=9){
            month=7;
            day+=22;
        }
        else{
            month=8;
            day-=9;
        }
        break;

    case 6:
        if(day<=9){
            month=8;
            day+=22;
        }
        else{
            month=9;
            day-=9;
        }
        break;

    case 7:
        if(day<=8){
            month=9;
            day+=22;
        }
        else{
            month=10;
            day-=8;
        }
        break;

    case 8:
        if(day<=9){
            month=10;
            day+=22;
        }
        else{
            month=11;
            day-=9;
        }
        break;
    
    case 9:
        if(day<=9){
            month=11;
            day+=21;
        }
        else{
            month=12;
            day-=9;
        }
        break;

    case 10:
        if(day<=10){
            month=12;
            day+=21;
        }
        else{
            month=1;
            day-=10;
        }
        break;

    case 11:
        if(day<=11){
            month=1;
            day+=20;
        }
        else{
            month=2;
            day-=11;
        }
        break;

    case 12:
        if(day<=10){
            month=2;
            day+=19;
        }
        else{
            month=3;
            day-=10;
        }
        break;
    }
    system("cls");
    printf("[%s]\n",monthsm[month]);
    printf("%d/%d/%d",year,month,day);
    printf("\n");
    xat();
    printf("\n");
    back_text();
    printf("\n");
    xat();
    printf("\n");
    conversion();
}
