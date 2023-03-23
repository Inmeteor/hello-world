#include <iostream>
using namespace std;
#include <string>
class GPTX{
	private:
	std::string question;
		GPTX():question("please ask a question!"){
	}//¹¹Ôìº¯Êý	
	public:
	GPTX(const char def[]):question(def){
	}
	void ask(char quest[])
	{
	question=std::string(quest);}
		std::string answer()
		{
			return question;
		}
}; 
int main()
{
	GPTX gpt("haha");
	std::string ans=gpt.answer();
	std::cout<< ans <<std:: endl;
	return 0;
}
