#include "Student.h"
#include "Exception.h"
#include <exception>
#include <stdexcept>

using namespace std;

int main()
{
	Student m1("Taras", 20, 59, "male", 3);
	cout << ++m1 << endl;
	cout << "count = " << Man::Count() << endl;
	{

		Student s4("Nazar", 17, 69, "Male", 1);
		cout << s4 << endl;
		cout << "count = " << Student::Count() << endl;
		Student s1;
        bool Result;

        do
        {
            try
            {
                Result = true;
                cin >> s1;
                cin >> s4;
                cout << ++s1 << endl;
                cout << ++s4 << endl;
            }
            catch (bad_exception& e)
            {
                Result = false;
                cerr << e.what() << endl;
            }
            catch (invalid_argument e)
            {
                Result = false;
                cout << e.what() << endl;
            }
            catch (Exception& e)
            {
                Result = false;
                cout << e.what() << endl;
            }
            catch (const char* e)
            {
                Result = false;
                cerr << e << endl;
            }
        } while (!Result);
		cout << "count = " << Student::Count() << endl;
	}

	return 0;
}