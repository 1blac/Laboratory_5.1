#include "Student_public.h"
#include "Student_private.h"
#include "Exception.h"
#include <exception>
#include <stdexcept>
using namespace std;
int main()
{
	/*Student_public s1;
	Student_public s4("Orest", 19, 69, "Male", 2);*/
	Student_private s1;
	Student_private s4("Orest", 19, 69, "Male", 2);
    cout << s4 << endl;
    s1 = ++s4;
    cout << s1 << endl;
    cout << s4 << endl;
    s1 = s4++;
    cout << s1 << endl;
    cout << s4 << endl;
    bool Result;

    do
    {
        try
        {
            Result = true;
            cin >> s1;
            cin >> s4;
            cout << s1 << endl;
            cout << s4++ << endl;
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
	s4.setChangeYearOFstudyPlus(1);
	cout << "ChangeYearOFstudyPlus: " << s4.getYearOFstudy() << endl;
	return 0;
}