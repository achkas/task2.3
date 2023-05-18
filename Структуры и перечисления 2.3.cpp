// Структуры и перечисления 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
//#include <windows.h>;


struct location {
    std::string city = " ";
    std::string street = " ";
    int house = 0;
    int apartment = 0;
    int postal_code = 0;
};

void print_array(location* arr, int size) {    

    for (int i = 0; i < size; ++i) {
        std::cout
            << "Город: " << arr[i].city << std::endl
            << "Улица : " << arr[i].street << std::endl
            << "Номер дома : " << arr[i].house << std::endl
            << "Номер квартиры " << arr[i].apartment << std::endl
            << "Индекс : " << arr[i].postal_code << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
        setlocale(LC_ALL, "ru");

    int size = 3;
    location* loc_array = new location[size];

    loc_array[0].city = "Москва";
    loc_array[0].street = "Арбат";
    loc_array[0].house = 12;
    loc_array[0].apartment = 8;
    loc_array[0].postal_code = 3700058;

    loc_array[1].city = "Новосибирск";
    loc_array[1].street = "Королёва";
    loc_array[1].house = 79;
    loc_array[1].apartment = 245;
    loc_array[1].postal_code = 59000580;

    loc_array[2].city = "Санкт-Петербург";
    loc_array[2].street = "Северный проспект";
    loc_array[2].house = 123;
    loc_array[2].apartment = 498;
    loc_array[2].postal_code = 2500012;
    
    print_array(loc_array, size); 

       delete[] loc_array;
    return 0;
}
