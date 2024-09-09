/*Algoritmos importantes:
    1--> horas, min e seg para segundos ------------------------------------------
    segundos = (horas * 3600 + min * 60 + seg);

    
    2--> contar 5 digitos de um nro ------------------------------------------
    d1 = nro / 10000;
    resto = nro % 10000;
    d2 = resto / 1000;
    resto = resto % 1000;
    d3 = resto / 100;
    resto = resto % 100;
    d4 = resto / 10;
    d5 = resto % 10;


    3--> minutos para horas ------------------------------------------
    horas = minutos / 60;


    4--> segundos para horas ------------------------------------------
    horas = segundos / 3600;


    5--> segundos para horas e minutos ------------------------------------------
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;


    6--> cálculo importante de segundos de diferença entre horários
    segundos_transcorridos = (horas2 * 3600 + minutos2 * 60 + segundos2) - (horas * 3600 + minutos * 60 + segundos);

*/