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
		System.out.println(" Last name: " + lastName);
		System.out.println(" FirstName: " + firstName);
		System.out.println(" Age: " + age);
	}

	public String getLast() {
		return lastName;
	}
}

class ArrayInOb {
	private Person[] a;
	private int nElems;

	public ArrayInOb(int max) {
		a = new Person[max];
		nElems = 0;
	}

	public void insert(String last, String first, int age) {
		a[nElems] = new Person(last, first, age);
		nElems++;
	}

	public void display() {
		for(int i=0; i<nElems; i++) {
			a[i].displayPerson();
		}
		System.out.println("");
	}

	public void insertionSort() {
		int i, j;

		for(i = 1; i<nElems; i++) {
			Person temp = a[i];
			j = i;

			while(j>0 && a[j-1].getLast().compareTo(temp.getLast()) > 0) {
				a[j] = a[j-1];
				--j;
			}

			a[j] = temp;
		}
	}

}

class ObjectSortApp {
	public static void main(String[] args) {
		int maxSize = 100;
		ArrayInOb arr;
		arr = new ArrayInOb(maxSize);

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

		System.out.println("Before sorting: ");
		arr.display();

		System.out.println("After sorting: ");
		arr.insertionSort();
		arr.display();
	}
}
