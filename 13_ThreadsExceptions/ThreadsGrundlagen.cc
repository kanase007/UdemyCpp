//#include <iostream>
//#include <string>
//#include <vector>
//#include <iterator>
//#include <algorithm>
//#include <numeric>
//#include <random>
//#include <chrono>
//#include <functional>
//
//#include <thread>
//
//using std::cout;
//using std::endl;
//using std::cin;
//using std::string;
//using std::vector;
//
//void print_text()
//{
//	cout << "Thread executed!\n";
//}
//
//void print_text2(int number)
//{
//	cout << "Thread executed!\n";
//	number++;
//}
//
//void print_text3(int &number)
//{
//	cout << "Thread executed!\n";
//	number++;
//}
//
//int main()
//{
//	// Thread erstellen
//	std::thread t1(print_text);
//	std::thread t2(print_text);
//
//	// Join
//	if(t1.joinable())
//		t1.join();
//	if(t2.joinable())
//		t2.join();
//
//	// Detach
//	//t1.detach();
//	//t2.detach();
//
//	// Funktionen �bergeben
//	/*int n1 = 12;
//	int n2 = 24;
//
//	std::thread t3(print_text2, n1);
//	std::thread t4(print_text2, n2);
//
//	if (t3.joinable())
//		t3.join();
//	if (t4.joinable())
//		t4.join();
//
//	cout << endl << "n1: " << n1 << "\n";
//	cout << endl << "n2: " << n2 << "\n";*/
//
//	// Referenzen �bergeben
//	/*int n1 = 12;
//	int n2 = 24;
//
//	std::thread t3(print_text3, std::ref(n1));
//	std::thread t4(print_text3, std::ref(n2));
//
//	if (t3.joinable())
//		t3.join();
//	if (t4.joinable())
//		t4.join();
//
//	cout << endl << "n1: " << n1 << "\n";
//	cout << endl << "n2: " << n2 << "\n";*/
//
//	// Anzahl an Threads bestimmen
//	/*unsigned int possible_threads = std::thread::hardware_concurrency();
//	cout << endl << "Poss. Threads: " << possible_threads;*/
//
//	// Thread ID
//	/*std::thread::id main_thread_id = std::this_thread::get_id();
//	cout << endl << "Thread ID of main: " << main_thread_id;*/
//
//	return 0;
//}