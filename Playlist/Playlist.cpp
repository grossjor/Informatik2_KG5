#include <iostream>
#include <string>
using namespace std;

// Aufzaehlung der in der Playlist verwalteten Musikstile
enum mkat { KLASSIK = 1, POP, ROCK, JUNGLE, HIPHOP, JAZZ };

 // Struktur zur Haltung der Daten der einzelnen Titel der Playlist
 // in einer verketteten Liste
struct titel {
	titel* next;
	 string name;
	 string interpret;
	 mkat kategorie;
};


//KLASSE
class playlist
 {
	 // private Attribute und Methoden
 private:
	 // Anker der verketteten Liste
		 struct titel* start_pointer;
	 // Name der Playlist
		 string name;
	 // Methoden, die nur innerhalb der Klasse benutzt werden
		 void AlleTitelLoeschen();
	 bool int_in_enummkat(int eingabe, enum mkat& ausgabe);
	
		 // oeffentliche Schnittstelle
 public:
	 // Standardkonstruktor
		 playlist() { start_pointer = NULL; name = "mylist"; }
	 // Destruktor
		 ~playlist() { AlleTitelLoeschen(); }
	 // Setter und Getter des Attributes name
		 void set_name(string n) { name = n; }
	 string get_name() const { return name; }
	
		 void TitelEinfuegen(string Name, string Interpret, mkat Kategorie);
	 void TitelLoeschen(string Name);
	 void TitelSuchenundAnzeigen(string Name);
	 void AlleTitelAnzeigen();
	 void PlaylistSpeichern();
	 void PlaylistLaden();
	
		 // Hilfsmethoden
		 void BenutzerdatenEingeben(string & titel, string & interpret,
			 mkat & CD_kategorie);
	 const char* enumkat_in_string(mkat eingabe);
	 void ZeileEingeben(string befehlszeile, string & text);
};


 /* Titel zu der verketteten Liste hinzufuegen */
 void playlist::TitelEinfuegen(string Name, string Interpret, mkat Kategorie)
 {
	 struct titel* ptr;
	 // Speicherplatz fuer neues Element der Liste vom Heap reservieren
		 if ((ptr = new titel) == NULL) {
		 cout << "kein Speicherplatz mehr vorhanden";
		 return;
		
	     }
		else {
		 // Daten in das Element einkopierem
			 ptr->name = Name;
		 ptr->interpret = Interpret;
		 ptr->kategorie = Kategorie;
		 // neues Element an Anfang der verketteten Liste einfuegen
			 ptr->next = start_pointer;
			 start_pointer = ptr;
		 return;
		
	    }
 }

bool playlist::TitelLoeschen(string Name)
	  {
	  // nach der Titel mit dem eingegebenen Namen suchen und loeschen
		  struct titel* ptr{ start_pointer }, * vorgaenger{ start_pointer };
	 
		  // nachschauen, ob der Titel in der verketteten Liste vorhanden ist
		  while (ptr != NULL && (ptr->name != Name))
		  {
		  vorgaenger = ptr;
		  ptr = ptr->next;
		  }
	 
		  // der gesuchte Titel wurde nicht gefunden
		  if (ptr == NULL) {
		  return false;
		 
	 }
		 else {
		  // der gesuchte Titel ist der erste in der Liste
			  if (ptr == start_pointer)
			  // das naechste Element wird das erste in der Liste
			  start_pointer = ptr->next;
		  else
			  /* der next-Zeiger des Elementes vor dem zu loeschenden Element
			  wird auf das dem zu loeschenden folgende Element gesetzt */
			  vorgaenger->next = ptr->next;
		  // der gefundene Titel wird geloescht
			  delete ptr;
		  return true;
		 
	 }
}
 
void playlist::AlleTitelAnzeigen()
	  {
	  // ptr wird auf den Anfang der Liste gesetzt
		  struct titel* ptr = start_pointer;
	 
		  system("cls");
	  cout << "\n Playlist " << name << endl << endl;
		 
		  if (ptr == NULL) {
		  cout << "Die Playlist ist leer.\n";
		  system("pause");
		 
	 }
	 
		  while (ptr != NULL)
		  {
		  // Ausgabe der playlist */
			  cout << ptr->name << "," << ptr->interpret << ",";
		  cout << enumkat_in_string(ptr->kategorie) << endl;
		  // pointer auf das naechste Element setzen
			  ptr = ptr->next;
		  }
	  cout << "\n";
	  system("pause");
}
 
void playlist::AlleTitelLoeschen()
	  {
	  struct titel* ptr;
	  struct titel* ptr_2;
	  // loesche die verkettete Liste
		  ptr = start_pointer;
	  while (ptr != NULL)
		  {
		  ptr_2 = ptr->next;
		  // Platz auf dem Heap freigeben
			  delete ptr;
		  ptr = ptr_2;
		  }
	  start_pointer = NULL;
}