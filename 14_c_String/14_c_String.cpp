#include <iostream>
#include <string>
using namespace std;

unsigned int strLen(const char* str)
{
    unsigned int counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

// tasl 1

void delet_(char line[], int value)
{
    for (size_t i = value; i < strlen(line); i++)
    {
        line[i] = line[i + 1];
    }
}

// task 2

void delete_symbol(char line[], char symbol)
{
    int j = 0;
    for (size_t i = 0; i < strlen(line); i++)
    {
        if (line[i] != symbol)
        {
            line[j++] = line[i];
        }
    }
    line[j] = '\0';
}

// task 3

void insert(char line[], int index, char symbol)
{
    if (index < 0 and index >= strlen(line)) {
        cout << "Error index" << endl;
        return;
    }
    
    for (size_t i = strlen(line); i > index ; i--)
    {
        line[i] = line[i - 1];
    }
    line[index] = symbol;
    line[strlen(line)] = '\0';
}


int main()
{
    //char str[]{'P','l','u','m','\0'};
    //str[0] = 65;
    //cout << str << endl;
    //char str2[] = "Apple";
    //cout << str2 << endl;
    ////str2 = "Banana"; Error

    ////char* line = new char[100];
    //cout << str2 << "\t Length : " << strLen(str2) << endl;
    //cout << "Hello" << "\t Length : " << strLen("Hello") << endl;
    //cout << strLen << endl;

    char str_1[50];
    char str_2[] = "Yellow";

    cout << "=================== Lenght line ====================" << endl;
    cout << str_2 << "\t length :: " << strlen(str_2) << endl;
    cout << "Lime" << "\t length :: " << strlen("Lime") << endl;

    cout << "\n=================== strcopy_s() ====================" << endl;
    cout << "Before --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    strcpy_s(str_1, str_2);
    cout << "After  --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    strcpy_s(str_1, "Purple");
    cout << "After  --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    char* one = new char[10];
    strcpy_s(one, strlen("Red") + 1, "Red");
    cout << "Result dynamic copy :: " << one << endl;

    cout << "\n=================== strncopy_s() ====================" << endl;
    cout << "Before --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    strncpy_s(str_1, "magenta", 4);
    cout << "After  --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    strncpy_s(str_1, str_2, 4);
    cout << "After  --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;

    cout << "\n=================== strcat_s() ====================" << endl;
    cout << "Before --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    strcat_s(str_1, str_2);
    cout << "After  --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    char res[100];
    strcpy_s(res, "Hello");
    cout << "Res :: " << res << endl;
    strcat_s(res, " World");
    cout << "Res :: " << res << endl;

    cout << "\n=================== strncat_s() ====================" << endl;
    cout << "Before --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;
    strncat_s(str_1, "Purple",4);
    cout << "After  --> \t " << "str_1 :: " << str_1 << "\t str_2 :: " << str_2 << endl;

    cout << "\n=================== strcmp() ====================" << endl;
    char a[] = "abc";
    char b[] = "Abc";
    cout << a << "\t" << b << " \t " << strcmp(a,b) << endl; // <0, 0, >0 

    char line[] = "df 423JHG!@.?";

    cout << "\n=================== isalpha(char) ====================" << endl;
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isalpha(line[i]) << " :: " << boolalpha << (bool)isalpha(line[i]) << endl;
    }

    cout << "\n=================== isdigit(char) ====================" << endl;
    
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isdigit(line[i]) << " :: " << boolalpha << (bool)isdigit(line[i]) << endl;
    }

    cout << "\n=================== isalnum(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isalnum(line[i]) << " :: " << boolalpha << (bool)isalnum(line[i]) << endl;
    }

    cout << "\n=================== isspace(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isspace(line[i]) << " :: " << boolalpha << (bool)isspace(line[i]) << endl;
    }

    cout << "\n=================== ispunct(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << ispunct(line[i]) << " :: " << boolalpha << (bool)ispunct(line[i]) << endl;
    }

    cout << "\n=================== islower(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << islower(line[i]) << " :: " << boolalpha << (bool)islower(line[i]) << endl;
    }

    cout << "\n=================== isupper(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isupper(line[i]) << " :: " << boolalpha << (bool)isupper(line[i]) << endl;
    }

    cout << "\n=================== tolower(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << (char)tolower(line[i]) << endl;
    }

    cout << "\n=================== toupper(char) ====================" << endl;

    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << (char)toupper(line[i]) << endl;
    }

    //int age;
    //cout << "Enter age :: ";
    //cin >> age;

    //char str_line[100];
    //cout << "Enter line :: ";
    ////cin >> str_line;
    //cin.ignore();
    //cin.getline(str_line, 100);
    //cout << "Result :: " << str_line << endl;
    ///*cin >> str_line;
    //cout << "Result :: " << str_line << endl;*/

    //string new_str = "test";
    //new_str[0] = 'T';
    //cout << new_str << endl;
    //cout << "Enter text :: ";
    //cin >> new_str;
    //cout << "Result :: " << new_str << endl;
    //cout << "Enter text :: ";
    //cin.ignore();
    //getline(cin,new_str);
    //cout << "Result :: " << new_str << endl;

    /*char text[100] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    bool flag = false;
    int counert = 0;
    for (size_t i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i])) {
            if(!flag)
                counert++;
            flag = true;
        }
        else {
            flag = false;
        }
    }
    cout << counert << endl;*/

    //char text[50] = "Lorem ipsum dolor";
    char* text = new char[50];
    strcpy_s(text, strlen("Lorem ipsum dolor")+1, "Lorem ipsum dolor");
    cout << text << endl;
    delete_symbol(text,'o');
    cout << text << endl;

}
