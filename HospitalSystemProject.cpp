//#include <iostream>
//
//using namespace std;
//
//string names[100];
//int specializations[100];
//int status[100];
//int index = 0;
//
//bool checkAvailableSpot(int specialization, int index = 0, int counter = 0) {
//    if (index >= 100) return true;
//    if (counter >= 5) return false;
//
//    if (specialization == specializations[index]) counter++;
//
//    checkAvailableSpot(specialization, index + 1, counter);
//}
//
//void addNewPatient() {
//    cout << "Please enter a Specialization, name, status: ";
//    int spec, stat;
//    string name;
//    cin >> spec >> name >> stat;
//
//    if (checkAvailableSpot(spec) && (stat == 0 || stat == 1)) {
//        specializations[index] = spec;
//        names[index] = name;
//        status[index] = stat;
//        index++;
//    } else cout << "Sorry we can't add more patients to this specialization.";
//}
//
//void printPatients(int counter, int count) {
//    cout << "There are " << counter << " patients in specialization " << count << "\n";
//
//    for (int i = 0; i < counter; i++)
//        if (status[i] == 0)
//            cout << specializations[i] << " " << names[i] << " urgent" << endl;
//
//    for (int i = 0; i < counter; i++)
//        if (status[i] == 1)
//            cout << specializations[i] << " " << names[i] << " regular" << endl;
//
//}
//
//bool checkSpecialization(const int idx, const int specializationsChecked[]) {
//    for (int i = 0; i < 20; i++) if (specializations[idx] == specializationsChecked[i]) return false;
//    return true;
//}
//
//void printAllPatients() {
//    int indexes[5 + 1];
//    int counter = 0;
//    int specializationsChecked[20] = {};
//    int specializedCheckedIndex = 0;
//
//    for (int i = 0; i < 100; i++) {
//        if (specializations[i] == -1) continue;
//        if (!checkSpecialization(i, specializationsChecked)) continue;
//
//        for (int j = 0; j < 100; j++) {
//            if (specializations[i] == specializations[j]) {
//                indexes[counter] = j;
//                counter++;
//            }
//        }
//        specializationsChecked[specializedCheckedIndex] = specializations[i];
//        specializedCheckedIndex++;
//
//        printPatients(counter, specializations[indexes[0]]);
//        counter = 0;
//    }
//
//    for (int i = 0; i < 20; i++) specializationsChecked[i] = 0;
//}
//
//void getNextPatient() {
//    cout << "Enter specialization: ";
//    int specialization;
//    cin >> specialization;
//    cout << endl;
//
//    bool getTreated = false;
//    bool found = false;
//
//    for (int i = 0; i < 100; i++) {
//        if (specializations[i] == specialization && status[i] == 0) {
//            cout << names[i] << " please go with the Dr\n";
//            getTreated = true;
//            specializations[i] = -1;
//            break;
//        }
//    }
//
//    if (!getTreated) {
//        for (int i = 0; i < 100; i++) {
//            if (specialization == specializations[i]) {
//                cout << names[i] << " please go with the Dr\n";
//                specializations[i] = -1;
//                found = true;
//                break;
//            }
//        }
//        if (!found) cout << "No patients at the moment";
//    }
//}
//
//int main() {
//    for (int i = 0; i < 100; i++) specializations[i] = -1;
//
//    while (true) {
//        int choice;
//        cout << "\nEnter your choice:\n";
//        cout << "1 - Add new Patient\n";
//        cout << "2 - Print all Patients\n";
//        cout << "3 - Get next Patient\n";
//        cout << "4 - Exit\n";
//
//        cin >> choice;
//
//        if (choice < 1 || choice > 4) {
//            cout << "Invalid Choice\n";
//            choice = -1;
//        } else if (choice == 1) addNewPatient();
//        else if (choice == 2) printAllPatients();
//        else if (choice == 3) getNextPatient();
//        else if (choice == 4) break;
//    }
//}
