#include  <iostream>
#include  <string>

using namespace std;

int main() {
	string search;
	
	cout << "Search: ";
	cin >> search;
	
	if (search == "COMPUTER") {
		cout << "it is an electronic device that can receive, store, process and output data";
	}
	else if (search == "HARDWARE COMPONENTS") {
		cout << "these are physical parts of a computer";
	}
	else if (search == "SOFTWARE COMPONENTS") {
		cout << "these are the set of instructions that we store and run our hardware";
	}
	else if (search == "ALGORITHM") {
		cout << "it is a step-by-step procedure or set of rules for solving a problem in programming";
	}
	else if (search == "DEBUGGING") {
		cout << "it is the process of finding and fixing errors or bug in a program";
	}
	else if (search == "APPLICATION PROGRAMMING") {
		cout << "it is a set of rules, protocols, and tools for building software applications";
	}
	else if (search == "DATABASE") {
		cout << "it is a structured data collection organized for efficient retrieval and manipulation by a computer program";
	}
	else if (search == "KEYWORD") {
		cout << "it is a word with a specific meaning used to define a program's structure and logic";
	}
	else if (search == "COMPILATION") {
		cout << "it is the process of creating an executable program through code written in a compiled programming language";
	}
	else if (search == "GIT") {
		cout << "it is a software used to track changes in source code during software development";
	}
	else if (search == "BUG") {
		cout << "it is an error, flaw, or unexpected behavior in a program that causes it to malfunction";
	}
	else if (search == "OBJECT-ORIENTED") {
		cout << "it is a programming model that uses objects or classes to design and organize code";
	}
	else if (search == "INTEGRATED DEVELOPMENT ENVIRONMENT") {
		cout << "it is a software application that programmers use for software development";
	}
	else if (search == "CLASS") {
		cout << "it is a template for creating objects";
	}
	else if (search == "PROGRAMMING LANGUAGE") {
		cout << "it is a set of rules and syntax programmers use to write source code";
	}
	else if (search == "MACHINE LANGUAGE") {
		cout << "it is the binary code a computer's CPU can execute directly";
	}
	else if (search == "CONDITIONALS") {
		cout << "in programming, conditionals are statements that allow code execution based on whether a specified condition is true or false";
	}
	else if (search == "HYPERTEXT TRANSFER") {
		cout << "it is an application layer protocol that enables the transfer of HTML file over the internet";
	}
	else if (search == "FRONTEND DEVELOPMENT") {
		cout << "it is the client-side development of a website or web application's user interface and user experience";
	}
	else if (search == "BACKEND DEVELOPMENT") {
		cout << "it is the server-side development of a web application";
	}
	else if (search == "USER INTERFACE DESIGN") {
		cout << "it refers to a website's visual and interactive elements that users interact with directly";
	}
	else if (search == "USER EXPERIENCE DESIGN") {
		cout << "it is a user's overall experience while interacting with a website";
	}
	else if (search == "BLOCK CODING") {
		cout << "it is a specific part of computer program";
	} 
	else if (search == "LOOP") {
		cout << "it is a programming structure that allows a statement or block of code to be run repeatedly until a specific condition is no longer true";
	}
	else if (search == "FUNCTIONAL PROGRAMMING") {
		cout << "it is a straightforward method of building software that involves using pure functions";
	}
	else if (search == "RANDOM ACCESS MEMORY") {
		cout << "it is a physical memory space inside a computer";
	}
	else if (search == "ASSEMBLY LANGUAGE") {
		cout << "it is a human-readble instruction mode that translates binary opcode into assembly instruction";
	}
	else if (search == "BYTE") {
		cout << "it is a unit of data that is eight binary digits long";
	}
	else if (search == "OPERAND") {
		cout << "it is a term used to denote objects which can be manipulated using different operators";
	}
	else if (search == "OPERATOR") {
		cout << "it is a term used to denote object which can manipulate different operands";
	}
	else {
		cout << "Word not found in the dictionary. ";
	}
	
	return 0;
}
	
