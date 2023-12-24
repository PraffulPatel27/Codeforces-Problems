import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Quests {

    public static int maxNutritionValues(int n, int[] types, int[] nutritionValues) {
        Map<Integer, Integer> maxNutrition = new HashMap<>();

        for (int i = 0; i < n; ++i) {
            int type = types[i];
            maxNutrition.put(type, Math.max(maxNutrition.getOrDefault(type, 0), nutritionValues[i]));
        }

        int nutritionSum = 0;
        for (int value : maxNutrition.values()) {
            nutritionSum += value;
        }

        return nutritionSum;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();

            int[] types = new int[n];
            for (int i = 0; i < n; ++i) {
                types[i] = scanner.nextInt();
            }

            int[] nutritionValues = new int[n];
            for (int i = 0; i < n; ++i) {
                nutritionValues[i] = scanner.nextInt();
            }

            int result = maxNutritionValues(n, types, nutritionValues);
            System.out.println(result);
        }

        scanner.close();
    }
}
