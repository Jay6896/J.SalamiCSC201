#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string name, scholarship_disp, hostel_disp, hostel_fee_disp;
    int jamb_score, age, hostel_pref, r;
    double waec_avg, tuition, fee, total_fee, scholarship_percent;
    bool first_choice, discp_record, isPrime;

    tuition = 1500000;

    cout << "Welcome to the PAU Admissions, Scholarship & Hostel Decision application! \n\nWhat is your Full name? ";
    getline(cin, name);

    cout << "\nWhat is your age? ";
    cin >> age;
    if (age < 0)
    {
        cout << "\n\nInvalid input, please restart this application and try again!";
        return 0;
    }
    else
    {
        cout << "\nWhat is your JAMB score? ";
        cin >> jamb_score;
        if (jamb_score < 0 || jamb_score > 400)
        {
            cout << "\n\nInvalid input, please restart this application and try again!";
            return 0;
        }
        else
        {
            cout << "\nWhat is your WAEC average? ";
            cin >> waec_avg;

            if (waec_avg < 0)
            {
                cout << "\n\nInvalid input, please restart this application and try again!";
                return 0;
            }
            else
            {

                cout << "\nIs PAU your first choice? \nEnter 1 for yes and 0 for no ";
                cin >> first_choice;
                if (first_choice < 0 || first_choice > 1)
                {
                    cout << "\n\nInvalid input, please restart this application and try again!";
                    return 0;
                }
                else
                {
                    cout << "\nDo you have any disciplinary record? \nEnter 1 for yes and 0 for no ";
                    cin >> discp_record;
                    if (discp_record < 0 || discp_record > 1)
                    {
                        cout << "\n\nInvalid input, please restart this application and try again!";
                        return 0;
                    }
                    else
                    {
                        cout << "\nWhich hostel would you like from the following? \n\nPlease input the number corresponding to the options\n1.) Main Hostel  (N180,000) \n2.) Annex Hostel (N120,000) \n3.) Day Student  (N0) ";
                        cin >> hostel_pref;
                        if (hostel_pref < 0 || hostel_pref > 3)
                        {
                            cout << "\n\nInvalid input, please restart this application and try again!";
                            return 0;
                        }
                        else
                        {
                            srand(time(0));
                            r = (rand() % 100) + 1;
                            isPrime = (r == 2 || r == 3 || r == 5 || r == 7 || r == 11 || r == 13 || r == 17 || r == 19 || r == 23 || r == 29 || r == 31 || r == 37 || r == 41 || r == 43 || r == 47 || r == 53 || r == 59 || r == 61 || r == 67 || r == 71 || r == 73 || r == 79 || r == 83 || r == 89 || r == 97);

                            if (((jamb_score >= 220 && waec_avg >= 60) && first_choice == true) || (jamb_score >= 200 && waec_avg >= 70))
                            {
                                fee = tuition;

                                if (jamb_score >= 320)
                                {
                                    fee = fee - (tuition * 0.3);
                                }
                                else if (jamb_score >= 280)
                                {
                                    fee = fee - (tuition * 0.2);
                                }
                                else if (jamb_score >= 240)
                                {
                                    fee = fee - (tuition * 0.1);
                                }

                                if (waec_avg >= 80 && first_choice == true)
                                {
                                    fee = fee - (tuition * 0.05);
                                }

                                if (hostel_pref == 1)
                                {
                                    fee += 180000;
                                }
                                else if (hostel_pref == 2)
                                {
                                    fee += 120000;
                                }
                                else if (hostel_pref == 3)
                                {
                                    fee = fee;
                                }

                                if (isPrime == true)
                                {
                                    fee = fee - 50000;
                                }

                                total_fee = fee;

                                if (jamb_score >= 320)
                                {
                                    scholarship_percent = 0.30;
                                }
                                else if (jamb_score >= 280)
                                {
                                    scholarship_percent = 0.20;
                                }
                                else if (jamb_score >= 240)
                                {
                                    scholarship_percent = 0.10;
                                }
                                else
                                {
                                    scholarship_percent = 0.0;
                                }

                                if (waec_avg >= 80 && first_choice == true)
                                {
                                    scholarship_percent += 0.05;
                                }

                                if (scholarship_percent == 0.35)
                                {
                                    scholarship_disp = "35%";
                                }
                                else if (scholarship_percent == 0.30)
                                {
                                    scholarship_disp = "30%";
                                }
                                else if (scholarship_percent == 0.25)
                                {
                                    scholarship_disp = "25%";
                                }
                                else if (scholarship_percent == 0.20)
                                {
                                    scholarship_disp = "20%";
                                }
                                else if (scholarship_percent == 0.15)
                                {
                                    scholarship_disp = "15%";
                                }
                                else if (scholarship_percent == 0.10)
                                {
                                    scholarship_disp = "10%";
                                }
                                else if (scholarship_percent == 0.05)
                                {
                                    scholarship_disp = "5%";
                                }
                                else
                                {
                                    scholarship_disp = "None";
                                }

                                if (hostel_pref == 1)
                                {
                                    hostel_disp = "Main Hostel";
                                    hostel_fee_disp = "N180,000";
                                }
                                else if (hostel_pref == 2)
                                {
                                    hostel_disp = "Annex Hostel";
                                    hostel_fee_disp = "N120,000";
                                }
                                else if (hostel_pref == 3)
                                {
                                    hostel_disp = "None (Day Student)";
                                    hostel_fee_disp = "None";
                                }

                                cout << "\n\nName: " << name << "\nAdmission Status: Admitted\nScholarship: " << scholarship_disp << "  Tuition After Scholarship: N" << (tuition * (1 - scholarship_percent)) << "\nHostel: " << hostel_disp << "  Fee: " << hostel_fee_disp << "\nRandom draw: " << r << "   Merit Grant: " << (isPrime == true ? "N50,000" : "None") << "\nTOTAL PAYABLE: N" << total_fee << "\n\n";
                            }
                            else if (discp_record == true || age < 15)
                            {
                                cout << "\n\nName: " << name << "\nAdmission Status: Rejected\nScholarship: Not Applicable  Tuition After Scholarship: N0\nHostel: Not Applicable  Fee: N0\nRandom draw: N/A   Merit Grant: None\nTOTAL PAYABLE: N0\n\n";
                            }
                            else
                            {
                                cout << "\n\nName: " << name << "\nAdmission Status: Pending\nScholarship: Pending  Tuition After Scholarship: Pending\nHostel: On Hold  Fee: Pending\nRandom draw: N/A   Merit Grant: Pending\nTOTAL PAYABLE: Pending\n\n";
                            }
                        }
                    }
                }
            }
        }
    }
}