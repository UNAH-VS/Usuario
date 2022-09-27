#include<iostream>
using std::endl;
using std::cin;
using std::cout;

#include<string>
using std::string;


class Usuario{

    public:
        Usuario(string mi_email, string mi_contrasenia, int mi_edad){
            if(mi_edad < 18){
                cout<<"No puede crear un usuario en esta plataforma. Necesita ser mayor de edad"<<endl;
                exit(0);
            }
            else{
                if (mi_contrasenia.length() < 8){
                    cout<<"Contraseña muy corta. Tiene que tener mas de 8 caracteres"<<endl;
                    exit(0);
                }
                else{
                    email = mi_email;
                    contrasenia = mi_contrasenia;
                    edad = mi_edad;

                }
            
            }
        }

        string get_email(){
            return email;
        }


        void set_nombre(string nuevo_nombre){
            nombre = nuevo_nombre;
        }

        string get_nombre(){
            return nombre;
        }

        void set_contrasenia(string nueva_contrasenia){
            contrasenia = nueva_contrasenia;
        }




    private:
        string nombre, email, contrasenia;
        string fecha_nacimiento;
        string nacionalidad;
        int edad;

};


int main(){

    Usuario usr1("usr1@gmail.com","12345", 20);

    cout<<"El correo del usuario es: "<<usr1.get_email()<<endl;

    usr1.set_nombre("Rigoberto");

    cout<<"El nombre del usuario 1 es: "<<usr1.get_nombre()<<endl;



    return 0;
}