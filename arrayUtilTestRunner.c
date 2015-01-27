#include <stdio.h>
typedef void TestFn(void);
typedef struct{
	char* name; 
	TestFn* fn;
} Test;

//code to be updated starts
TestFn setup,teardown,fixtureSetup,fixtureTearDown,test_areEqual_returns_0_for_different_sized_arrays,test_areEqual_returns_0_for_different_lengthed_arrays,test_areEqual_returns_1_for_same_int_arrays,test_areEqual_returns_1_for_same_float_arrays,test_areEqual_returns_1_for_same_char_arrays,test_areEqual_returns_0_for_different_arrays,test_areEqual_returns_0_for_arrays_with_same_contents_but_different_sequence,test_create_creates_ArrayUtil_instance_and_initializes_array_elements_with_0,test_resize_returns_shrinked_ArrayUtil_when_length_is_reduced,test_resize_returns_stretched_ArrayUtil_setting_extra_elements_to_0,test_resize_returns_stretched_resized_char_ArrayUtil_0_initialized_for_ArrayUtil_and_length,test_findIndex_returns_neg_1_if_the_search_int_is_not_found,test_findIndex_returns_3_if_the_search_float_is_on_3rd_location,test_findIndex_returns_proper_index,test_findIndex_returns_1_if_the_search_char_is_found_on_1st_location,test_findFirst_returns_6_when_asked_for_even_integers,test_findFirst_returns_12_when_asked_for_integers_divisible_by_6,test_findFirst_returns_e_when_asked_vowels,test_forEach_runs_task_for_every_integer,test_reduce_returns_sum_of_all_integers_of_array,test_count_returns_number_of_even_numbers_in_array_util,test_findLast_returns_last_even_number_from_integer_array,test_findLast_returns_NULL_if_element_is_not_found,test_findLast_returns_last_vowel_from_char_array,test_create_returns_same_array_if_array_lengths_are_same_and_values_are_same,test_forEach_gives_2_3_4_5_6_for_1_2_3_4_5_in_same_array,test_resize_add_0_to_the_new_places_created_in_integer_array,test_resize_add_0_to_the_new_places_created_in_float_array,test_resize_add_0_to_the_new_places_created_in_char_array,test_resize_add_0_to_the_new_places_created_in_double_array,test_create_allocates_space_for_INT_array_and_assigns_zero_to_all_bytes,test_when_an_array_is_resized_into_smaller_size_the_array_is_trimmed,test_that_function_creates_new_array_or_not,test_areEqual_returns_0_if_typeSize_of_two_arrays_are_not_equal,test_resize_returns_new_Array_util_with_String_array_of_new_length_by_putting_0s_in_new_created_spaces,test_resize_returns_new_Array_util_with_String_array_of_new_length_by_removing_extra_values,test_ArrayUtil_a_and_ArrayUtil_b_are_will_be_equal_by_each_element_typeof_double,test_ArrayUtil_a_and_ArrayUtil_b_are_will_be_equal_by_each_element_typeof_string,test_ArrayUtil_a_and_ArrayUtil_b_are_will_not_be_equal_String,test_create_should_set_the_length_and_typeSize_fields_of_array_to_the_values_passed_to_create_function,test_resize_should_grow_length_of_array_and_set_them_to_zero_when_new_size_is_more,test_resize_should_not_change_length_of_array_when_new_size_is_same_as_old_size,test_array_util_areEqual_returns_0_if_both_array_are_not_equal_in_length_and_elements,test_create_allocates_space_for_DOUBLE_array_and_assigns_zero_to_all_bytes,test_resize_returns_CHAR_array_within_structure_with_new_allocated_space,test_resize_returns_CHAR_array_within_structure_with_new_allocated_space_less_than_previous,test_resize_returns_DOUBLE_array_within_structure_with_new_allocated_space,test_resize_returns_DOUBLE_array_within_structure_with_new_allocated_space_less_than_previous,test_resize_returns_FLOAT_array_within_structure_with_new_allocated_space,test_resize_returns_INT_array_within_structure_with_new_allocated_space,test_create_Structures_with_all_fields_NULL,test_Create_creates_new_array_of_float_containing_all_elements_0,test_Create_creates_new_charArray_containing_all_elements_0_and_gives_0_for_different_lengths,test_Create_creates_new_doubleArray_containing_all_elements_0_and_gives_0_for_different_lengths,test_Create_creates_new_intArray_containing_all_elements_0_and_gives_0_for_different_lengths,test_Create_creates_new_floatArray_containing_all_elements_0_and_gives_0_for_different_lengths,test_resize_should_contain_the_initial_array_element,test_areEqual_returns_0_when_length_is_equal_but_typeSize_is_not_equal,test_forEach_does_multiplication_of_item_with_item_plus_one,test_reduce_gives_15_when_elements_are_1_2_3_4_5_and_initial_value_is_0,test_reduce_gives_30_when_elements_are_1_2_3_4_5_and_initial_value_is_15,test_create_001,test_create_002,test_create_003,test_create_004,test_create_006,test_create_007,test_create_008,test_create_009,test_create_010,test_create_011,test_findIndex_returns_index_of_the_String_element_where_it_presents,test_findIndex_returns_index_of_the_char_element_where_it_presents,test_findIndex_returns_index_of_the_float_element_where_it_presents,test_findIndex_returns_index_of_the_integer_element_where_it_presents,test_findFirst_gives_occurence_of_first_element_in_floatArray_greaterThan5,test_findFirst_returns_the_first_student_who_has_passed_the_exam_struct_array,test_findLast_returns_the_last_element_if_there_is_match_in_character_array,test_findLast_returns_the_last_element_if_there_is_match_in_integer_array;
Test test[] = {"test_areEqual_returns_0_for_different_sized_arrays",test_areEqual_returns_0_for_different_sized_arrays,"test_areEqual_returns_0_for_different_lengthed_arrays",test_areEqual_returns_0_for_different_lengthed_arrays,"test_areEqual_returns_1_for_same_int_arrays",test_areEqual_returns_1_for_same_int_arrays,"test_areEqual_returns_1_for_same_float_arrays",test_areEqual_returns_1_for_same_float_arrays,"test_areEqual_returns_1_for_same_char_arrays",test_areEqual_returns_1_for_same_char_arrays,"test_areEqual_returns_0_for_different_arrays",test_areEqual_returns_0_for_different_arrays,"test_areEqual_returns_0_for_arrays_with_same_contents_but_different_sequence",test_areEqual_returns_0_for_arrays_with_same_contents_but_different_sequence,"test_create_creates_ArrayUtil_instance_and_initializes_array_elements_with_0",test_create_creates_ArrayUtil_instance_and_initializes_array_elements_with_0,"test_resize_returns_shrinked_ArrayUtil_when_length_is_reduced",test_resize_returns_shrinked_ArrayUtil_when_length_is_reduced,"test_resize_returns_stretched_ArrayUtil_setting_extra_elements_to_0",test_resize_returns_stretched_ArrayUtil_setting_extra_elements_to_0,"test_resize_returns_stretched_resized_char_ArrayUtil_0_initialized_for_ArrayUtil_and_length",test_resize_returns_stretched_resized_char_ArrayUtil_0_initialized_for_ArrayUtil_and_length,"test_findIndex_returns_neg_1_if_the_search_int_is_not_found",test_findIndex_returns_neg_1_if_the_search_int_is_not_found,"test_findIndex_returns_3_if_the_search_float_is_on_3rd_location",test_findIndex_returns_3_if_the_search_float_is_on_3rd_location,"test_findIndex_returns_proper_index",test_findIndex_returns_proper_index,"test_findIndex_returns_1_if_the_search_char_is_found_on_1st_location",test_findIndex_returns_1_if_the_search_char_is_found_on_1st_location,"test_findFirst_returns_6_when_asked_for_even_integers",test_findFirst_returns_6_when_asked_for_even_integers,"test_findFirst_returns_12_when_asked_for_integers_divisible_by_6",test_findFirst_returns_12_when_asked_for_integers_divisible_by_6,"test_findFirst_returns_e_when_asked_vowels",test_findFirst_returns_e_when_asked_vowels,"test_forEach_runs_task_for_every_integer",test_forEach_runs_task_for_every_integer,"test_reduce_returns_sum_of_all_integers_of_array",test_reduce_returns_sum_of_all_integers_of_array,"test_count_returns_number_of_even_numbers_in_array_util",test_count_returns_number_of_even_numbers_in_array_util,"test_findLast_returns_last_even_number_from_integer_array",test_findLast_returns_last_even_number_from_integer_array,"test_findLast_returns_NULL_if_element_is_not_found",test_findLast_returns_NULL_if_element_is_not_found,"test_findLast_returns_last_vowel_from_char_array",test_findLast_returns_last_vowel_from_char_array,"test_create_returns_same_array_if_array_lengths_are_same_and_values_are_same",test_create_returns_same_array_if_array_lengths_are_same_and_values_are_same,"test_forEach_gives_2_3_4_5_6_for_1_2_3_4_5_in_same_array",test_forEach_gives_2_3_4_5_6_for_1_2_3_4_5_in_same_array,"test_resize_add_0_to_the_new_places_created_in_integer_array",test_resize_add_0_to_the_new_places_created_in_integer_array,"test_resize_add_0_to_the_new_places_created_in_float_array",test_resize_add_0_to_the_new_places_created_in_float_array,"test_resize_add_0_to_the_new_places_created_in_char_array",test_resize_add_0_to_the_new_places_created_in_char_array,"test_resize_add_0_to_the_new_places_created_in_double_array",test_resize_add_0_to_the_new_places_created_in_double_array,"test_create_allocates_space_for_INT_array_and_assigns_zero_to_all_bytes",test_create_allocates_space_for_INT_array_and_assigns_zero_to_all_bytes,"test_when_an_array_is_resized_into_smaller_size_the_array_is_trimmed",test_when_an_array_is_resized_into_smaller_size_the_array_is_trimmed,"test_that_function_creates_new_array_or_not",test_that_function_creates_new_array_or_not,"test_areEqual_returns_0_if_typeSize_of_two_arrays_are_not_equal",test_areEqual_returns_0_if_typeSize_of_two_arrays_are_not_equal,"test_resize_returns_new_Array_util_with_String_array_of_new_length_by_putting_0s_in_new_created_spaces",test_resize_returns_new_Array_util_with_String_array_of_new_length_by_putting_0s_in_new_created_spaces,"test_resize_returns_new_Array_util_with_String_array_of_new_length_by_removing_extra_values",test_resize_returns_new_Array_util_with_String_array_of_new_length_by_removing_extra_values,"test_ArrayUtil_a_and_ArrayUtil_b_are_will_be_equal_by_each_element_typeof_double",test_ArrayUtil_a_and_ArrayUtil_b_are_will_be_equal_by_each_element_typeof_double,"test_ArrayUtil_a_and_ArrayUtil_b_are_will_be_equal_by_each_element_typeof_string",test_ArrayUtil_a_and_ArrayUtil_b_are_will_be_equal_by_each_element_typeof_string,"test_ArrayUtil_a_and_ArrayUtil_b_are_will_not_be_equal_String",test_ArrayUtil_a_and_ArrayUtil_b_are_will_not_be_equal_String,"test_create_should_set_the_length_and_typeSize_fields_of_array_to_the_values_passed_to_create_function",test_create_should_set_the_length_and_typeSize_fields_of_array_to_the_values_passed_to_create_function,"test_resize_should_grow_length_of_array_and_set_them_to_zero_when_new_size_is_more",test_resize_should_grow_length_of_array_and_set_them_to_zero_when_new_size_is_more,"test_resize_should_not_change_length_of_array_when_new_size_is_same_as_old_size",test_resize_should_not_change_length_of_array_when_new_size_is_same_as_old_size,"test_array_util_areEqual_returns_0_if_both_array_are_not_equal_in_length_and_elements",test_array_util_areEqual_returns_0_if_both_array_are_not_equal_in_length_and_elements,"test_create_allocates_space_for_DOUBLE_array_and_assigns_zero_to_all_bytes",test_create_allocates_space_for_DOUBLE_array_and_assigns_zero_to_all_bytes,"test_resize_returns_CHAR_array_within_structure_with_new_allocated_space",test_resize_returns_CHAR_array_within_structure_with_new_allocated_space,"test_resize_returns_CHAR_array_within_structure_with_new_allocated_space_less_than_previous",test_resize_returns_CHAR_array_within_structure_with_new_allocated_space_less_than_previous,"test_resize_returns_DOUBLE_array_within_structure_with_new_allocated_space",test_resize_returns_DOUBLE_array_within_structure_with_new_allocated_space,"test_resize_returns_DOUBLE_array_within_structure_with_new_allocated_space_less_than_previous",test_resize_returns_DOUBLE_array_within_structure_with_new_allocated_space_less_than_previous,"test_resize_returns_FLOAT_array_within_structure_with_new_allocated_space",test_resize_returns_FLOAT_array_within_structure_with_new_allocated_space,"test_resize_returns_INT_array_within_structure_with_new_allocated_space",test_resize_returns_INT_array_within_structure_with_new_allocated_space,"test_create_Structures_with_all_fields_NULL",test_create_Structures_with_all_fields_NULL,"test_Create_creates_new_array_of_float_containing_all_elements_0",test_Create_creates_new_array_of_float_containing_all_elements_0,"test_Create_creates_new_charArray_containing_all_elements_0_and_gives_0_for_different_lengths",test_Create_creates_new_charArray_containing_all_elements_0_and_gives_0_for_different_lengths,"test_Create_creates_new_doubleArray_containing_all_elements_0_and_gives_0_for_different_lengths",test_Create_creates_new_doubleArray_containing_all_elements_0_and_gives_0_for_different_lengths,"test_Create_creates_new_intArray_containing_all_elements_0_and_gives_0_for_different_lengths",test_Create_creates_new_intArray_containing_all_elements_0_and_gives_0_for_different_lengths,"test_Create_creates_new_floatArray_containing_all_elements_0_and_gives_0_for_different_lengths",test_Create_creates_new_floatArray_containing_all_elements_0_and_gives_0_for_different_lengths,"test_resize_should_contain_the_initial_array_element",test_resize_should_contain_the_initial_array_element,"test_areEqual_returns_0_when_length_is_equal_but_typeSize_is_not_equal",test_areEqual_returns_0_when_length_is_equal_but_typeSize_is_not_equal,"test_forEach_does_multiplication_of_item_with_item_plus_one",test_forEach_does_multiplication_of_item_with_item_plus_one,"test_reduce_gives_15_when_elements_are_1_2_3_4_5_and_initial_value_is_0",test_reduce_gives_15_when_elements_are_1_2_3_4_5_and_initial_value_is_0,"test_reduce_gives_30_when_elements_are_1_2_3_4_5_and_initial_value_is_15",test_reduce_gives_30_when_elements_are_1_2_3_4_5_and_initial_value_is_15,"test_create_001",test_create_001,"test_create_002",test_create_002,"test_create_003",test_create_003,"test_create_004",test_create_004,"test_create_006",test_create_006,"test_create_007",test_create_007,"test_create_008",test_create_008,"test_create_009",test_create_009,"test_create_010",test_create_010,"test_create_011",test_create_011,"test_findIndex_returns_index_of_the_String_element_where_it_presents",test_findIndex_returns_index_of_the_String_element_where_it_presents,"test_findIndex_returns_index_of_the_char_element_where_it_presents",test_findIndex_returns_index_of_the_char_element_where_it_presents,"test_findIndex_returns_index_of_the_float_element_where_it_presents",test_findIndex_returns_index_of_the_float_element_where_it_presents,"test_findIndex_returns_index_of_the_integer_element_where_it_presents",test_findIndex_returns_index_of_the_integer_element_where_it_presents,"test_findFirst_gives_occurence_of_first_element_in_floatArray_greaterThan5",test_findFirst_gives_occurence_of_first_element_in_floatArray_greaterThan5,"test_findFirst_returns_the_first_student_who_has_passed_the_exam_struct_array",test_findFirst_returns_the_first_student_who_has_passed_the_exam_struct_array,"test_findLast_returns_the_last_element_if_there_is_match_in_character_array",test_findLast_returns_the_last_element_if_there_is_match_in_character_array,"test_findLast_returns_the_last_element_if_there_is_match_in_integer_array",test_findLast_returns_the_last_element_if_there_is_match_in_integer_array};
char testFileName[] = {"arrayUtilTest.c"};
void _setup(){/*CALL_SETUP*/}
void _teardown(){/*CALL_TEARDOWN*/}
void fixtureSetup(){}
void fixtureTearDown(){}
//code to be updated ends

int testCount;
int passCount;
int currentTestFailed;

int assert_expr(int expr, const char* fileName, int lineNumber, const char* expression){
	if(expr) return 0;
	currentTestFailed = 1;
	printf("\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
	return 1;
}
int assert_equal(int val1, int val2, const char* fileName, int lineNumber,const char* expr1,const char* expr2){
	if(val1 == val2) return 0;
	currentTestFailed = 1;
	printf("\t %d == %d: failed in assertEqual(%s,%s) at %s:%d\n",val1,val2,expr1,expr2, fileName,lineNumber);
	return 1;
}

void runTest(char* name, TestFn test){
	testCount++,currentTestFailed=0;
	printf("**  %s\n",name);
	_setup();
		test();
	_teardown();
	if(!currentTestFailed) passCount++;	
}
int main(int argc, char const *argv[]){		
	int i,total = sizeof(test)/sizeof(Test);	
	fixtureSetup();
	testCount=0,passCount=0;
	printf("**------ %s ------\n",testFileName);
	for (i = 0; i < total; ++i)
		runTest(test[i].name,test[i].fn);	
	printf("** Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
	fixtureTearDown();	
	return 0;
}