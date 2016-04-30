#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <bits/stdc++.h>
#include <vector>
#include <typeinfo>
using namespace std;
string m_code="";
string data_sec="";
vector < vector<string> > instruction_set;
void data_region(set<string> variables)
{
	
	data_sec+="\n.data\n";
	data_sec+="newline : .asciiz \n";
	set<string>::iterator it;
	for ( it=variables.begin() ; it != variables.end(); it++ )
	{
		if(*it!=",")
			data_sec+="\t"+ *it + ":	.word	0\n";
	}
}


string convertToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int countNoOfLine()
{
	int number_of_lines = 0;
    string line;
    ifstream file("./test/test22.ir");

    while (getline(file, line))
        ++number_of_lines;
    return number_of_lines;
}

void findBasicBlocks()
{
	int j;
	int noOfLine  =  countNoOfLine();
	ifstream input2("./test/test22.ir");
	vector <int> leaders;
	leaders.push_back(1);
	int lineno;
	for( string line; getline(input2,  line);)
	{
		cout << line << endl;
		size_t found = line.find("goto");
  		if (found!=string::npos)
  		{
			stringstream ssin(line);
			j=0;
			string arr[6];
			while (ssin.good())
			{
	        	ssin >> arr[j];
	        	if(j==5)
	        	{
	        		leaders.push_back(atoi(arr[j].c_str()));
	        		arr[0] = arr[0].erase(arr[0].length()-1,arr[0].length());
	        		//int nextLineOfGoto= arr[j]-'0'+1;
	        		int b = atoi(arr[0].c_str());
	        		if(b<noOfLine)
						leaders.push_back(b+1);

	        	}
	        	j++;
	    	}
  		}
   	}

   	cout << "\n\n\nLeaders are: \n";
   	sort(leaders.begin(), leaders.begin()+leaders.size());
   	for(int i=0;i<leaders.size();i++)
   		cout << leaders[i] << " ";
	cout << endl;
}

void generate_code(string a [])
{
	if(a[1]=="+")
	{
		//cout << a[4].length() << a[4] <<" "<< a[3].length() << a[3] << endl;
		char o1[10],o2[10];
		strcpy(o1, a[3].c_str());
		strcpy(o2, a[4].c_str());
		if(islower(o1[0]) && islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[4]+"\n";
			m_code+="move\tt1\t"+a[3]+"\n";
			m_code+="add\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else if(!islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="add\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}

		else if(islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="add\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else if(!islower(o1[0]) && islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="move\tt1\t"+a[4]+"\n";
			m_code+="add\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
	}	

	if(a[1]=="-")
	{
		//cout << a[4].length() << a[4] <<" "<< a[3].length() << a[3] << endl;
		char o1[10],o2[10];
		strcpy(o1, a[3].c_str());
		strcpy(o2, a[4].c_str());
		if(islower(o1[0]) && islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[4]+"\n";
			m_code+="move\tt1\t"+a[3]+"\n";
			m_code+="sub\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else if(!islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="sub\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}

		else if(islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="sub\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else if(!islower(o1[0]) && islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="move\tt1\t"+a[4]+"\n";
			m_code+="sub\tt0\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
	}	

	if(a[1]=="*")
	{
		//cout << a[4].length() << a[4] <<" "<< a[3].length() << a[3] << endl;
		char o1[10],o2[10];
		strcpy(o1, a[3].c_str());
		strcpy(o2, a[4].c_str());
		if(islower(o1[0]) && islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[4]+"\n";
			m_code+="move\tt1\t"+a[3]+"\n";
			m_code+="mul\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else if(!islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="mul\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}

		else if(islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="mul\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else if(!islower(o1[0]) && islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="move\tt1\t"+a[4]+"\n";
			m_code+="mul\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
	}	

	if(a[1]=="/")
	{
		//cout << a[4].length() << a[4] <<" "<< a[3].length() << a[3] << endl;
		char o1[10],o2[10];
		strcpy(o1, a[3].c_str());
		strcpy(o2, a[4].c_str());
		if(islower(o1[0]) && islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[4]+"\n";
			m_code+="move\tt1\t"+a[3]+"\n";
			m_code+="div\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
			m_code+="mfhi\tt0\n";
			m_code+="mflo\tt1\n";
		
		}
		else if(!islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="div\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
			m_code+="mfhi\tt0\n";
			m_code+="mflo\tt1\n";
		}

		else if(islower(o1[0]) && !islower(o2[0]))
		{
			m_code+="move\tt0\t"+a[3]+"\n";
			m_code+="li\tt1\t"+a[4]+"\n";
			m_code+="div\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
			m_code+="mfhi\tt0\n";
			m_code+="mflo\tt1\n";
		}
		else if(!islower(o1[0]) && islower(o2[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="move\tt1\t"+a[4]+"\n";
			m_code+="div\tt0\tt1\n";
			m_code+="move\t"+a[2]+"\tt0\n";
			m_code+="mfhi\tt0\n";
			m_code+="mflo\tt1\n";
		}
	}	

	if(a[1]=="=")
	{
		char o1[10];
		strcpy(o1, a[3].c_str());
		if(!islower(o1[0]))
		{
			m_code+="li\tt0\t"+a[3]+"\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
		else
		{
			m_code+="move\tt0\t"+a[3]+"\n";
			m_code+="move\t"+a[2]+"\tt0\n";
		}
	}

}
int main(int argc, char **argv)
{
	string line;
	int i,j=0;
	cout << argv[1] << endl;
	//FILE *fp = fopen(argv[1], "r");
	ifstream input(argv[1]);
	set<string> variables;
	map <string, int> array_varible;
	for( string line; getline(input,  line);)
	{
		stringstream ssin(line);
		j=0;
		string arr[6];
		while (ssin.good())
		{
        	ssin >> arr[j];
        	if(!((line.length() <=11 && j==3)|| (line.length()<=14 && j==4)))
				arr[j] = arr[j].erase(arr[j].length()-1,arr[j].length());

			char o[10];
			strcpy(o, arr[j].c_str());
        	if(j==2 && islower(o[0]))
        	{
        		variables.insert(arr[j]);
        	}
        	j++;
    	}
    	vector<std::string> vec(arr, arr + sizeof(arr) / sizeof(std::string));
    	instruction_set.push_back(vec);
    	generate_code(arr);
    	cout << endl;
   	}
   	data_region(variables);

   	j= 0;
   	ifstream input1(argv[1]);
 	
	// Find basic block for input file text2.txt
	findBasicBlocks();
	// liveness analsis of instruction
	map<string, string> symboltable;
	//vector<int, vector  > liveness;
	map<string, string> live_status;
	vector<map<string, string> >all_var_status;
	map<string, vector<map<string, string> > > liveness;
	set<string>::iterator it;
	for ( it=variables.begin() ; it != variables.end(); it++ )
	{
		if(*it!=",")
			symboltable[*it]="dead";
	}
//	priting initial symbol table for liveness analysis
	cout << "initial symbol tables for liveness analysis is: \n";
	for (map<string,string>::iterator it=symboltable.begin(); it!=symboltable.end(); ++it)
    	cout << it->first << " => " << it->second << '\n';
    cout << endl;


	cout << "instruction sets: " << instruction_set.size() << endl;
	for(int i=0;i< instruction_set.size();i++)
	{
		for (int j=0;j<instruction_set[i].size();j++){
			cout << instruction_set[i][j] << "\t";

			char o[10];
			strcpy(o, instruction_set[i][2] .c_str());
			if(j==2 && !islower(o[0]))
        	{
        		char o1[10], o2[10];
        		strcpy(o1, instruction_set[i][3].c_str());
        		strcpy(o2, instruction_set[i][4].c_str());
        		bool flag = false;
        		if(!islower(o1[0]) && !(o2[0]>='0' && o2[0] <='9'))
        		{
        			flag = true;
        			array_varible[instruction_set[i][j]] = (o1[0]-'0'+0)* 4;
        		}

        	
        		if( o1[0]>='0' && o1[0] <='9' && o2[0]>='0' && o2[0] <='9')
        		{
        			cout << "int else " << o1[0] << " aaa "<< o2[0]-'0'+0;
        
        			array_varible[instruction_set[i][j]] = (o1[0]-'0'+0)*(o2[0]-'0'+0)* 4;
        		}
        	}
		}
		cout << endl;
	}

	cout << endl;
	for(int i=instruction_set.size()-1;i>=0;i--)
	{
		all_var_status.clear();
		for (int j=0;j<instruction_set[i].size();j++){
			char o[10], o1[10],o2[10];
			strcpy(o, instruction_set[i][2].c_str());
			strcpy(o1, instruction_set[i][3].c_str());
			strcpy(o2, instruction_set[i][4].c_str());
			
			//cout << "o: " << o << "o1: " << o1 << "o2: " << o2 << endl;
			//cout << "o:" <<  typeid(o).name() << " o1: " << typeid(o1).name() << endl;
			if(j==2 && islower(o[0]))
			{
				live_status[instruction_set[i][j]] =  symboltable[instruction_set[i][j]];
				all_var_status.push_back(live_status);
				symboltable[instruction_set[i][j]] ="dead";
			}
			if (j==3 && islower(o1[0]))
			{
				live_status[instruction_set[i][j]] =  symboltable[instruction_set[i][j]];
				all_var_status.push_back(live_status);
				symboltable[instruction_set[i][j]] ="use("+instruction_set[i][0]+")";
			}
			if (j==4 && islower(o2[0]))
			{
				live_status[instruction_set[i][j]] =  symboltable[instruction_set[i][j]];
				all_var_status.push_back(live_status);
				symboltable[instruction_set[i][j]] ="use("+instruction_set[i][0]+")";
			}
		}

		liveness[instruction_set[i][0]] = all_var_status;
		cout << "symbol table at line : "<< i+1 << endl;
		for (map<string,string>::iterator it=symboltable.begin(); it!=symboltable.end(); ++it)
    		cout << it->first << " => " << it->second << '\n';
    	cout << endl;
	}

	cout << endl << "live variable analysis is " << endl;

	for (map<string, vector<map<string, string> > >::iterator it=liveness.begin(); it!=liveness.end(); ++it)
    	{
		
    	
 		cout << it->first << " ";
		//cout << endl << it->first << it->second.size();
        	int i = 0;
    		for(i=0;i<it->second.size();i++){
			//cout << "____ : "<< it->second.size();
			for (map<string, string>::iterator it1 = it->second[i].begin() ; it1 != it->second[i].end(); ++it1)
			{
				cout << it1->first << " : " << it1->second << "  ";
	    
			}
		}
    			 
		cout << endl;
	
    }
    
	for (map<string, vector<map<string, string> > >::iterator it=liveness.begin(); it!=liveness.end(); ++it)
    {
		/*cout << it->first << " => "<< '\t' << liveness[it->first].size() << endl;*/
/*
		for(int i=0;i< instruction_set.size();i++)
		{
			for (int j=0;j<instruction_set[i].size();j++){
				cout << instruction_set[i][j] << "\t";
			}
			cout << endl;
		}*/

		/*for (vector<map<string, string> >::iterator itt = liveness[it->first].begin() ; itt != liveness[it->first].end(); ++itt)
    	{
    		for(map<string,string>::iterator it=.begin(); it!=mymap.end(); ++it)
    			cout << it->first << " => " << it->second << '\n';
    	}*/
    	map<string,string>::const_iterator map_iter;
    	vector<map<string, string> >::iterator itt;
    	for(itt=liveness[it->first].begin(); itt!=liveness[it->first].end(); ++itt)
    	{
    	//	cout <<  map_iter->first << "--------" << map_iter->second << endl;
    	}

		 
	/*	for(int i=0;i<liveness[it->first].size();i++)
		{
			cout << (liveness[it->first])[i]["y"];
		}
*/
	/*	for (vector<map<string, string> >::iterator itt = liveness[it->first].begin() ; itt != liveness[it->first].end(); ++itt)
    		{
    			cout << "abhay " << *itt[];
    			//cout << *itt<< " => " << *itt << '\n';
    			/*for (map<string,string>::iterator it1=(itt->first).begin(); it1!=(itt->first).end(); ++it1)
    				cout << it1->first << " => " << it1->second << '\n';
    	
    		//}
  		cout << '\n';*/
		/*for (int i=0;i<liveness[it->first].size();i++)
		{
			cout << "size: "  << liveness[it->first] << endl;
		}	*/
    }
    cout << endl;
	//code generettion output

	for (map<string,int>::iterator it=array_varible.begin(); it!=array_varible.end(); ++it)
	{
		string size;
		stringstream convert;
		convert << it->second;
		size = convert.str();
		data_sec+="\t"+it->first + "\t.space\t"+size+"\n";
    //	std::cout << it->first << " => " << it->second << '\n';
    }

	cout << data_sec << endl;
	string text_sec="";
   	text_sec+="\n.text\n";
   	cout << text_sec;

	cout << m_code << endl;

}