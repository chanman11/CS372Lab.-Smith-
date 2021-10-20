//code help from: https://sites.google.com/site/drriggsnewsite/classlist/cop4020proglangfall12/calendarplfall12/exam-1-review/kwic-in-python-c-c-java

using namespace std;

list<string> wordlist;

void readWords() {
    ifstream in ( "test.txt" );
    string word;
    if ( !in )   return;
    while ( in>> word )
        wordlist.push_back ( word );
}


multimap<string,string> dictionary;

void getKeyTexts() {

    string first,second, key, fourth, fifth;

    first=second=key=fourth=fifth="";
    for (list<string>::iterator ai=wordlist.begin(); ai !=wordlist.end(); ++ai) {
        if (first!="") {
            string text = first+" "+second+" "+key+" "+fourth+" "+fifth;
            dictionary.insert(pair<string,string>(key, text));
        }
        first=second; second=key; key=fourth; fourth=fourth; fourth = *ai;
    }
}

int main () {
    readWords();
    for(list<string>::iterator ai=wordlist.begin(); ai!=wordlist.end(); ++ai)
        cout << *ai << " ";
    cout << endl << endl;

    getKeyTexts();

    multimap<string, string>::iterator it = dictionary.begin();
    while(it != dictionary.end())  {
        cout<<it->second<<endl;
        it++;
    }

    return 0;
}