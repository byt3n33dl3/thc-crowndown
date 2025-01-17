private HashMap<String, String> itemDetails;

public void addItemWithDetails(String item, String details) {
    itemList.add(item);
    itemDetails.put(item, details);
    System.out.println(item + " with details '" + details + "' has been added to the list.");
}

public void displayItemDetails(String item) {
    String details = itemDetails.get(item);
    if (details != null) {
        System.out.println("Details for " + item + ": " + details);
    } else {
        System.out.println("No details available for " + item + ".");
    }
}
