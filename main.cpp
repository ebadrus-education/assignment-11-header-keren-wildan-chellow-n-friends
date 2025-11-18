#include <iostream>
using namespace std;

void createAccount() {
    cin.ignore(1000, '\n');

    string username, name, email, password, password2;
    int pick;

    cout << "\033[93m\n";

    do {
        system("cls");
        cout << "\n Create Your Cute Account ૮꒰ ˶• ༝ •˶꒱ა ♡ \n";
        cout << " 1. Username\n";
        cout << " 2. Name\n";
        cout << " 3. Email Address\n";
        cout << " 4. Password\n";
        cout << " 5. Exit\n";
        cout << "╰┈➤ : ";
        cin >> pick;
        cin.ignore();

        switch (pick) {
            case 1:
                cout << "\nEnter your cute username ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, username);
                cout << "\nYay! Username saved!! ദ്ദി ˉ͈̀꒳ˉ͈́ )✧\n";
                break;

            case 2:
                cout << "\nEnter your cute name ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, name);
                cout << "\nCute name saved!! ദ്ദി ˉ͈̀꒳ˉ͈́ )✧\n";
                break;

            case 3:
                cout << "\nEnter your Email Address ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, email);
                cout << "\nEmail saved!! Let's go ── .✦\n";
                break;

            case 4:
                cout << "\nEnter your password ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, password);

                cout << "\nConfirm your password ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, password2);

                if (password != password2) {
                    cout << "\nPasswords don’t match!! Try again (っ˘̩╭╮˘̩)っ\n";
                } else {
                    cout << "\nPassword confirmed!! ── .✦ \n";
                }
                break;

            case 5:
                cout << "\nFinishing your account setup . . . ₍^. .^₎⟆\n";
                break;

            default:
                cout << "\nWrong input!!!\n";
                break;
        }

    } while (pick != 5);

    cout << "\n ᯓ★ Your Cute LibraryKita Account ₊˚⊹ᰔ \n";
    cout << "Username : " << username << endl;
    cout << "Name     : " << name << endl;
    cout << "Email    : " << email << endl;
    cout << "Password : " << password2 << endl;
    cout << "\nCongratulations!! Your account has been created ૮꒰ ˶• ༝ •˶꒱ა ♡\n";

    cout << "\033[0m\n";
}

void login() {
    string savedUsername = "librarykita";
    string savedPassword = "1234";

    string username, password;
    int pick;

    do {
        system("cls");
        cout << "\033[93m\n";
        cout << "\n 𓆝 𓆟 𓆞 Login Menu  𓆟 𓆞 𓆝  \n";
        cout << " 1. Input Username\n";
        cout << " 2. Input Password\n";
        cout << " 3. Exit\n";
        cout << "╰┈➤ : ";
        cin >> pick;
        cin.ignore(1000, '\n');

        switch (pick) {

            case 1: {
            
                cout << "Enter your cute username ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, username);

                if (username != savedUsername) {
                    cout << "Wrong username cutiezz, please try again (っ˘̩╭╮˘̩)っ\n";
                } else {
                    cout << "Helloww " << savedUsername << " !! ₍ᐢ. .ᐢ₎ ₊˚⊹♡ \n";
                }
                break;
            }

            case 2: {
                do {
                    cout << "Enter your password ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                    cout << "╰┈➤ : ";
                    getline(cin, password);

                    if (password != savedPassword) {
                        cout << "Wrong password cutiezz, please try again (っ˘̩╭╮˘̩)っ\n";
                    }

                } while (password != savedPassword);

                cout << "\n Good Job!! True Password ₍ᐢ. .ᐢ₎ ₊˚⊹♡\n";

                if (username == savedUsername && password == savedPassword) {
                    cout << "\n You're already logged in cutiezz ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                }
                break;
            }

            case 3:
                cout << "Exiting login menu… ₍^. .^₎⟆\n";
                break;

            default:
                cout << "Wrong input!!  ₍^. .^₎⟆\n";
                break;
        }

    } while (pick != 3);
     cout << "\033[0m\n";
}

void forgotPassword() {
    string savedUsername = "librarykita";
    string savedPassword = "1234";

    string username, newPassword, confirmNewPassword;
    int pick;

    do {
        system("cls");
        cout << "\033[93m\n";
        cout << "\n ⁺‧₊˚ ཐི⋆ Forgot Password Menu ⋆ཋྀ ˚₊‧⁺\n";
        cout << " 1. Input Username\n";
        cout << " 2. Reset Password\n";
        cout << " 3. Exit\n";
        cout << "╰┈➤ : ";
        cin >> pick;
        cin.ignore(1000, '\n'); 

        switch (pick) {

            case 1: {
                cout << "Enter your cute username ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                cout << "╰┈➤ : ";
                getline(cin, username);

                if (username != savedUsername) {
                    cout << "Wrong username cutiezz, try again (っ˘̩╭╮˘̩)っ\n";
                } else {
                    cout << "Helloww " << savedUsername << " !! ₍ᐢ. .ᐢ₎ ₊˚⊹♡ \n";
                    cout << "You can reset your password now! ₍^. .^₎⟆\n";
                }
                break;
            }

            case 2: {
                if (username != savedUsername) {
                    cout << "Please enter the correct username first!! ₍^. .^₎⟆\n";
                    break;
                }

                do {
                    cout << "\nEnter your NEW password ૮꒰ ˶• ༝ •˶꒱ა ♡\n";
                    cout << "╰┈➤ : ";
                    getline(cin, newPassword);

                    cout << "Confirm your NEW password ♡\n";
                    cout << "╰┈➤ : ";
                    getline(cin, confirmNewPassword);

                    if (newPassword != confirmNewPassword) {
                        cout << "Password doesn't match cutiezz! Try again (っ˘̩╭╮˘̩)っ\n";
                    }

                } while (newPassword != confirmNewPassword);

                savedPassword = newPassword;

                cout << "\n Yayyy!! Your password has been reset ₍ᐢ. .ᐢ₎ ₊˚⊹♡ \n";
                break;
            }

            case 3:
                cout << "Exiting forgot password menu… ₍^. .^₎⟆\n";
                break;

            default:
                cout << "Wrong menu input cutiezz!! ₍^. .^₎⟆\n";
                break;
        }

    } while (pick != 3);

    cout << "\033[0m\n";
}
 

int main(){
    system("chcp 65001 >nul");
    cout << "\033[93m";
    cout << "\n\n                      ⋆˚࿔ ᯓ★𓂃˖˳·˖ ִֶָ ⋆ LIBRARYKITA⋆ ִֶָ˖·˳˖𓂃 ִֶָ˙⋆✮── .✦" << endl << endl;
    cout << "                               Cute Style Digital Library        " <<  endl << endl;
    cout << "                      ⋆˚࿔ ᯓ★𓂃˖˳· ִֶָ ⋆ _૮₍ ˶•⤙•˶ ₎ა_⋆ ִֶָ˖·˳˖𓂃 ִֶָ˙⋆✮── .✦" << endl;
    cout << "\033[0m";
    
    cout << "\033[36m";
    cout << R"(
                                                                                                
.---.                                                                                       
|   |.--./|                                                   .     .--.                    
|   ||__|||                                .-.          .-  .'|     |__|                    
|   |.--.||        .-,.--.           .-,.--.\ \        / /.'  |     .--.     .|             
|   ||  |||  __    |  .-. |    __    |  .-. |\ \      / /<    |     |  |   .' |_     __     
|   ||  |||/'__ '. | |  | | .:--.'.  | |  | | \ \    / /  |   | ____|  | .'     | .:--.'.   
|   ||  ||:/`  '. '| |  | |/ |   \ | | |  | |  \ \  / /   |   | \ .'|  |'--.  .-'/ |   \ |  
|   ||  |||     | || |  '- `" __ | | | |  '-    \ `  /    |   |/  . |  |   |  |  `" __ | |  
|   ||__|||\    / '| |      .'.''| | | |         \  /     |    /\  \|__|   |  |   .'.''| |  
'---'    |/\'..' / | |     / /   | |_| |         / /      |   |  \  \      |  '.'/ /   | |_ 
         '  `'-'`  |_|     \ \._,\ '/|_|     |`-' /       '    \  \  \     |   / \ \._,\ '/ 
                            `--'  `"          '..'       '------'  '---'   `'-'   `--'  `"  
    )";

cout << "\033[0m\n\n";

    int menu;
do{
    cout << "૮₍ •⤙•˶ Choose ur first path ── .✦ \n ";
    cout << "1. Create account \n 2. Login\n 3. Forgot Password\n 4. Exit\n";
    cout << "My first path : ";
    cin >> menu;

    switch (menu){
        case 1:
        createAccount();
        break;

        case 2:
        login();
        break;

        case 3:
        forgotPassword();
        break;

        case 0:
            cout << "See you cutiezz!! You've left the program (づ๑•ᴗ•๑)づ♡";
        break;

        default:
            cout << "Wrong input!!";
        break;
    }
} while (menu !=0);

return 0;

}