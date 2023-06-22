#include<iostream>
using namespace std;
class Song { 

  public: 
  string title;
  string artist;

      Song(string new_title, string new_artist) { //constructor takes place of all setters

        title = new_title;
        artist = new_artist;
      }

      ~Song() { //destructor
        cout<<"\nGoodbye "<<title<<"!";
      }
      // setters unnecssary in the presence of a constructor
   /*
    void new_title(string tit) { //setter    
      title = tit;
    }
    */

    string get_title() { //getter
      return title;
    }
    /*
    void new_artist(string art1) { //setter
      artist = art1; 
    }
    */
    string get_artist() { //getter
      return artist;
    }
    

};

int main() {

  Song mp3_1("Turkish Cotton", "Larry June"); //through constructor usage
  Song mp3_2("Oh Lets Do It", "Lil Wayne");
  
  //Song mp3_1; (if there is no constructer)

  //mp3_1.title = "Perfect"; (if there is no constructer)
  //mp3_1.artist = "Ed Sheeran"; (if there is no constructer)
  //mp3_1.new_title(mp3_1.title); (if there is no constructer)
  //mp3_1.new_artist(mp3_1.artist); (if there is no constructer)
  cout<<mp3_1.get_title();
  
  cout<<"\n";

  cout<<mp3_1.get_artist();

  cout<<"\n";
  cout<<"\n";
  
  cout<<mp3_2.get_title();
  
  cout<<"\n";

  cout<<mp3_2.get_artist();

  return 0;
}