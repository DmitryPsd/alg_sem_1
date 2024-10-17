#include <gtest/gtest.h>


#include "Insertion_Sort.h"
#include "Selection_Sort.h"
#include "Exchange_Sort.h"
#include "bubble_Sort.h"
#include "Optimized_Bubble_Sort.h" 

//тесты сортировки вставками
TEST(Insertion_Sort_Test, one_element) {
    int arr[] = { 4 };
    Insert_Sort(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(Insertion_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    Insert_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Insertion_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    Insert_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Insertion_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    Insert_Sort(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

    //тесты сортировки выбором

TEST(Selection_Sort_Test, one_element) {
    int arr[] = { 4 };
    Selection_Sort(arr, 1); 
    EXPECT_EQ(arr[0], 4);
}

TEST(Selection_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    Selection_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Selection_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    Selection_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Selection_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    Selection_Sort(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

//тесты сортировки обменом

TEST(Exchange_Sort_Test, one_element) {
    int arr[] = { 4 };
    Exchange_Sort(arr, 1);
    EXPECT_EQ(arr[0], 4);
}

TEST(Exchange_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    Exchange_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Exchange_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    Exchange_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Exchange_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    Exchange_Sort(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


//тесты сортировки пузырьком

TEST(bubble_Sort_Test, one_element) {
    int arr[] = { 4 };
    bubble_Sort(arr, 1); 
    EXPECT_EQ(arr[0], 4);
}

TEST(bubble_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    bubble_Sort(arr, 7); 
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(bubble_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    bubble_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(bubble_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    bubble_Sort(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

//тесты сортировки пузырьком с улучшениями

TEST(Optimized_Bubble_Sort_Test, one_element) {
    int arr[] = { 4 };
    Optimized_Bubble_Sort(arr, 1); 
    EXPECT_EQ(arr[0], 4);
}

TEST(Optimized_Bubble_Sort_Test, sorted_element) {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    Optimized_Bubble_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Optimized_Bubble_Sort_Test, Reversed_element) {
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    Optimized_Bubble_Sort(arr, 7);
    int expected[] = { 1, 2, 3, 4, 5, 6, 7 };
    for (int i = 0; i < 7; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(Optimized_Bubble_Sort_Test, Double_element) {
    double arr[] = { 6.1, -1.8, 2.0, -7.5, 0.0 };
    Optimized_Bubble_Sort(arr, 5);
    double expected[] = { -7.5, -1.8, 0.0, 2.0, 6.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
    int main(int argc, char** argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }