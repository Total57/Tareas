#include <iostream>
using namespace std ;
int main (){
    int CREPA = 40;
    bool menu ;
    int total ;
    cout << "Bienvenido a Crepas Angeles - Tenemos dos menus, uno dulce y otro salado, cada uno con una distintos ingredienteas a elegir - Cabe destacar que la crepa por si sola tienen un valor de $40 -" << endl;
    cout << "\nPor favor selecicone digite '0' para solicitar el menu DULCE o '1' para el SALADO: " ;
    cin >> menu ;

    if (menu == 0){ // -------------------------------------------- TODO EL MENU DULCE --------------------------------------------
    int fruta ;
    int FRESAS = 20;
    int PLATANO = 15;
    int MANZANAS = 25;
    int FRAMBUESAS = 30;

    int proteinas ;
    int MANI = 15;
    int NUEZ = 18;
    int CHOCOLATE = 20;
    int HELADO = 25;

    int cremas ;
    int NUTELLA = 20;
    int BATIDA = 10;
    int YOGUR = 12;

    int salsas ;
    int ARCE = 15;
    int CARAMELO = 18;
    int CH_CALIENTE = 20;

    cout << "-------------- MENU DULCE --------------" ;
    cout << "\n--- Frutas ---" << endl ;
    cout << "1 - Fresas frescas - $20 " << endl;
    cout << "2 - Platano en rodajas - $15 " << endl;
    cout << "3 - Manzanas caramelizadas - $25 " << endl;
    cout << "4 - Frambuesas - $30 " << endl;
    cout << "\n--- Proteinas ---" << endl ;
    cout << "5 - Crema de cacahuate - $15 " << endl;
    cout << "6 - Nuez picada - $18 " << endl;
    cout << "7 - Chocolate derretido - $20 " << endl;
    cout << "8 - Helado de vainilla - $25 " << endl;
    cout << "\n--- Cremas ---" << endl ;
    cout << "9 - Nutella - $20 " << endl;
    cout << "10 - Crema batida - $10 " << endl;
    cout << "11 - Yogur griego - $12 " << endl;
    cout << "\n--- Salsas ---" << endl ;
    cout << "12 - Sirope de arce - $15 " << endl;
    cout << "13 - Salsa de caramelo - $18 " << endl;
    cout << "14 - Salsa de chocolate caliente - $20 " << endl;
    cout << "\n-------------- MENU DULCE --------------" << endl ;

    cout << "\nSelecciona una Fruta digitando el numero que tienen al inicio: " ;
    cin >> fruta ;
    while (fruta > 4 || fruta < 1){
    cout << "\nSelecciona una Fruta que este en el menu: " ;
    cin >> fruta ;
    }
    if (fruta == 1){
        fruta = FRESAS ;
        cout << "-- Su crepa tiene fresas fresas- $20 --\n" ;
    }
    if (fruta == 2){
        fruta = PLATANO ;
        cout << "-- Su crepa tiene platano en rodajas - $15 --\n" ;
    }
    if (fruta == 3){
        fruta = MANZANAS ;
        cout << "-- Su crepa tiene manzanas caramelizadas - $25 --\n" ;
    }
    if (fruta == 4){
        fruta = FRAMBUESAS ;
        cout << "-- Su crepa tiene frambuesas - $30 --\n" ;
    }
    
    
    cout << "\nSelecciona una Proteinas digitando el numero que tienen al inicio: " ;
    cin >> proteinas ;
    while (proteinas > 8 || proteinas < 5){
    cout << "\nSelecciona una Proteina que este en el menu: " ;
    cin >> proteinas ;
    }
    if (proteinas == 5){
        proteinas = MANI ;
        cout << "-- Su crepa tiene crema de cacahuate - $15 --\n" ;
    }
    if (proteinas == 6){
        proteinas = NUEZ ;
        cout << "-- Su crepa tiene nuez picada - $18 --\n" ;
    }
    if (proteinas == 7){
        proteinas = CHOCOLATE  ;
        cout << "-- Su crepa tiene chocolate derretidi - $20 --\n" ;
    }
    if (proteinas == 8){
        proteinas = HELADO ;
        cout << "-- Su crepa tiene helado de vainilla - $25 --\n" ;
    }
    
    cout << "\nSelecciona una Crema digitando el numero que tienen al inicio: " ;
    cin >> cremas ;
    while (cremas >11 || cremas < 9){
    cout << "\nSelecciona una Crema que este en el menu: " ;
    cin >> cremas ;
    }
    if (cremas == 9){
        cremas = NUTELLA ;
        cout << "-- Su crepa tiene nutella - $20 --\n" ;
    }
    if (cremas == 10){
        cremas = BATIDA ;
        cout << "-- Su crepa tiene crema batida - $10 --\n" ;
    }
    if (cremas == 11){
        cremas = YOGUR ;
        cout << "-- Su crepa tiene yogur griego - $12 --\n" ;
    }

    cout << "\nSelecciona una Salsa digitando el numero que tienen al inicio: " ;
    cin >> salsas ;    
    while (salsas > 14 || salsas < 12){
    cout << "\nSelecciona una Salsa que este en el menu: " ;
    cin >> salsas ;
    }
    if (salsas == 12){
        salsas = ARCE ;
        cout << "-- Su crepa tiene sirope de arce - $15 --\n" ;
    }
    if (salsas == 13){
        salsas = CARAMELO ;
        cout << "-- Su crepa tiene salsa de caramelo - $18 --\n" ;
    }
    if (salsas == 14){
        salsas = CH_CALIENTE ;
        cout << "-- Su crepa tiene salsa de chocolate caliente - $20 --\n" ;
    }

    total = fruta + proteinas + cremas + salsas + CREPA ;
    cout << "\n ------ Su crepa dulce tiene un costo final de " << total << " pesos MX ------\n" ;
    }// -------------------------------------------- TODO EL MENU DULCE --------------------------------------------


    if (menu == 1){ // -------------------------------------------- TODO EL MENU SALADO --------------------------------------------
    int verduras ;
    int espinacas = 10;
    int champi = 12;
    int jitomates_cherry = 15;
    int pimientos_asados = 18;

    int proteinas ;
    int pollo_parrilla = 20;
    int jamon = 18;
    int tofu = 15;
    int pavo = 22;

    int cremas ;
    int queso_ricota = 15;
    int crema_agria = 10;
    int salsa_moztaza = 12;

    int salsas ;
    int salsa_pesto = 15;
    int salsa_champi = 12;
    int salsa_queso_cheddar = 18;

    cout << "-------------- MENU SALADO --------------" ;
    cout << "\n--- Verduras ---" << endl ;
    cout << "1 - Espinacas - $10 " << endl;
    cout << "2 - Champiñones - $12 " << endl;
    cout << "3 - Tomates cherry - $15 " << endl;
    cout << "4 - Pimientos asados - $18 " << endl;
    cout << "\n--- Proteinas ---" << endl ;
    cout << "5 - Pollo a la parrilla - $20 " << endl;
    cout << "6 - Jamón - $18 " << endl;
    cout << "7 - Tofu salteado - $15 " << endl;
    cout << "8 - Pavo en tiras - $22 " << endl;
    cout << "\n--- Cremas ---" << endl ;
    cout << "9 - Queso ricotta - $15 " << endl;
    cout << "10 - Crema agria - $10 " << endl;
    cout << "11 - Salsa de mostaza y miel - $12 " << endl;
    cout << "\n--- Salsas ---" << endl ;
    cout << "12 - Salsa de pesto - $15 " << endl;
    cout << "13 - Salsa de champiñones - $12 " << endl;
    cout << "14 - Salsa de queso cheddar - $18 " << endl;
    cout << "\n-------------- MENU SALADO --------------" << endl ;

    cout << "\nSelecciona una Verdura digitando el numero que tienen al inicio: " ;
    cin >> verduras ;
    while (verduras > 4 || verduras < 1){
    cout << "\nSelecciona una Verdura que este en el menu: " ;
    cin >> verduras ;
    }
    if (verduras == 1){
        verduras = espinacas ;
        cout << "-- Su crepa tiene espinacas - $10 --\n" ;
    }
    if (verduras == 2){
        verduras = champi ;
        cout << "-- Su crepa tiene champiñones en rodajas - $12 --\n" ;
    }
    if (verduras == 3){
        verduras = jitomates_cherry ;
        cout << "-- Su crepa tiene jitomates_cherry caramelizadas - $15 --\n" ;
    }
    if (verduras == 4){
        verduras = pimientos_asados ;
        cout << "-- Su crepa tiene pimientos asados - $18 --\n" ;
    }
    
    
    cout << "\nSelecciona una Proteinas digitando el numero que tienen al inicio: " ;
    cin >> proteinas ;
    while (proteinas > 8 || proteinas < 5){
    cout << "\nSelecciona una Proteina que este en el menu: " ;
    cin >> proteinas ;
    }
    if (proteinas == 5){
        proteinas = pollo_parrilla ;
        cout << "-- Su crepa tiene pollo a la parrilla - $20 --\n" ;
    }
    if (proteinas == 6){
        proteinas = jamon ;
        cout << "-- Su crepa tiene jamon - $18 --\n" ;
    }
    if (proteinas == 7){
        proteinas = tofu  ;
        cout << "-- Su crepa tiene tofu salteado - $15 --\n" ;
    }
    if (proteinas == 8){
        proteinas = pavo ;
        cout << "-- Su crepa tiene pavo en tiras - $22 --\n" ;
    }
    
    cout << "\nSelecciona una Crema digitando el numero que tienen al inicio: " ;
    cin >> cremas ;
    while (cremas >11 || cremas < 9){
    cout << "\nSelecciona una Crema que este en el menu: " ;
    cin >> cremas ;
    }
    if (cremas == 9){
        cremas = queso_ricota ;
        cout << "-- Su crepa tiene queso ricota - $15 --\n" ;
    }
    if (cremas == 10){
        cremas = crema_agria ;
        cout << "-- Su crepa tiene crema crema agria - $10 --\n" ;
    }
    if (cremas == 11){
        cremas = salsa_moztaza ;
        cout << "-- Su crepa tiene salsa de moztaza y miel - $12 --\n" ;
    }

    cout << "\nSelecciona una Salsa digitando el numero que tienen al inicio: " ;
    cin >> salsas ;    
    while (salsas > 14 || salsas < 12){
    cout << "\nSelecciona una Salsa que este en el menu: " ;
    cin >> salsas ;
    }
    if (salsas == 12){
        salsas = salsa_pesto ;
        cout << "-- Su crepa tiene salsa de pesto - $15 --\n" ;
    }
    if (salsas == 13){
        salsas = salsa_champi ;
        cout << "-- Su crepa tiene salsa de champiñones - $12 --\n" ;
    }
    if (salsas == 14){
        salsas = salsa_queso_cheddar ;
        cout << "-- Su crepa tiene salsa de queso cheddar - $18 --\n" ;
    }

    total = verduras + proteinas + cremas + salsas + CREPA ;
    cout << "\n ------ Su crepa salada tiene un costo final de " << total << " pesos MX ------\n" ;
    }// -------------------------------------------- TODO EL MENU SALADO --------------------------------------------
}