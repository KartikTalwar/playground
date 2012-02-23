class Person {
	private String lastName;
	private String firstName;
	private int age;

	public Person(String last, String first, int a) {
		lastName = last;
		firstName = first;
		age = a;
	}

	public void displayPerson() {
		System.out.print(" Last name: " + lastName);
		System.out.print(", First Name: "+ firstName);
		System.out.println(", Age: " + age);
	}


	public String getLast() {
		return lastName;
	}
}


class ClassDataArray {
	private Person[] a;
	private int nElems;

	// Constructor
	public ClassDataArray(int max) {
		a = new Person[max];
		nElems = 0;
	}

	public Person find(String searchName) {
		int i;

		for(i=0; i<nElems; i++) {
			if(a[i].getLast().equals(searchName)) {
				break;
			}
		}

		if(i == nElems) {
			return null;
		}
		else {
			return a[i];
		}
	} // find


	public void insert(String last, String first, int age) {
		a[nElems] = new Person(last, first, age);
		nElems++;
	}

	public boolean delete(String searchName) {
		int i;

		for(i=0; i<nElems; i++) {
			if(a[i].getLast().equals(searchName)) {
				break;
			}
		}

		if(i == nElems) {
			return false;
		}
		else {
			for(int j=i; j<nElems; j++) {
				a[j] = a[j+1];
			}
			nElems--;

			return true;
		}
	} // delete

	public void displayAll() {
		for(int i=0; i<nElems; i++) {
			a[i].displayPerson();
		}
	}
}



class ClassDataApp {
	public static void main(String[] args) {
		int maxSize = 100;
		ClassDataArray arr;
		arr = new ClassDataArray(maxSize);

		arr.insert("Talwar", "Kartik", 19);
		arr.insert("Smith", "Lorraine", 37);
		arr.insert("Yee", "Tom", 43);
		arr.insert("Adams", "Henry", 15);
		arr.insert("Hashimoto", "Sato", 23);
		arr.insert("Stimson", "Henry", 40);
		arr.insert("Velasques", "Jose", 37);
		arr.insert("Vang", "Mich", 22);
		arr.insert("Creswell", "Lucinda", 18);
		arr.insert("Smith", "John", 24);

		arr.displayAll();
		System.out.println("\n");

		String searchKey = "Stimson";
		Person found;
		found = arr.find(searchKey);

		if(found != null) {
			System.out.println("Found ");
			found.displayPerson();
			System.out.println("\n");
		}
		else {
			System.out.println("Can't find " + searchKey);
			System.out.println("\n");
		}

		System.out.println("Deleting Talwar, Stimson and Vang");
		arr.delete("Talwar");
		arr.delete("Stimson");
		arr.delete("Vang");

		arr.displayAll();
	}
}

