class ArrayApp
{
	public static void main(String[] args)
	{
		long[] arr;	// reference to array
		arr = new long[100];
		int nElems = 0;
		int i;
		long searchKey;

		arr[0] = 42;
		arr[1] = 12;
		arr[2] = 18;
		arr[3] = 23;
		arr[4] = 79;
		arr[5] = 69;
		arr[6] = 496;
		arr[7] = 4;
		arr[8] = 2;
		arr[9] = 12;
		nElems = 10;

		// Display the array items
		System.out.println("Printing all the items");
		for(i=0; i<nElems; i++)	{
			System.out.print(arr[i] + " ");
		}
		System.out.println("");
		System.out.println("");


		// Search the array
		System.out.println("Searching all the items");
		searchKey = 42;
		for(i=0; i<nElems; i++)	{
			if(arr[i] == searchKey) {
				break;
			}
		}

		if(i == nElems)	{
			System.out.println("Can't find " + searchKey);
		}
		else {
			System.out.println("Found " + searchKey);
		}
		System.out.println("");
		System.out.println("");


		// Array Deletion
		System.out.println("Delete an item");
		searchKey = 23;
		for(i=0; i<nElems; i++) {
			if(arr[i] == searchKey) {
				break;
			}
		}
		for(int j=i; j<nElems-1; j++) {
			arr[j] = arr[j+1];
		}
		nElems--;


		// Display the final array
		for(i=0; i<nElems; i++) {
			System.out.println(arr[i]+"");
		}
		System.out.println("");
		System.out.println("");


	}
}
