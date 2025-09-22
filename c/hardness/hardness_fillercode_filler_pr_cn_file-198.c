// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -50;
signed char var_1_2 = -5;
signed char var_1_3 = -4;
signed char var_1_4 = -2;
unsigned short int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 256;
signed long int var_1_10 = 2;
signed long int var_1_11 = 1000000000;
unsigned long int var_1_12 = 1;
unsigned long int var_1_13 = 3902113393;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 10;
unsigned short int var_1_17 = 1;
signed char var_1_18 = 64;
unsigned short int var_1_19 = 64352;
signed long int var_1_20 = 10000000;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_23 = 0;
unsigned char var_1_24 = 128;
unsigned short int var_1_25 = 1;
unsigned char var_1_26 = 64;
unsigned short int var_1_27 = 128;
unsigned short int var_1_28 = 64514;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
signed long int var_1_31 = -128;
float var_1_32 = 50.5;
float var_1_33 = 256.5;
float var_1_34 = 49.15;
float var_1_35 = 10.5;
float var_1_36 = 5.2;
float var_1_37 = 3.75;
unsigned char var_1_38 = 1;
double var_1_39 = 15.5;
double var_1_40 = 127.5;
double var_1_41 = 63.6;
double var_1_42 = 49.75;
double var_1_43 = 64.25;
unsigned char var_1_44 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_20 = 10000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch198Filler_PR_CN
	signed long int stepLocal_4 = /* 7L, 208L, 216L, 687L, 718L, 838L, 1007L) */ ((/* 3L, 204L, 217L, 688L, 719L, 834L, 1008L) */ ((var_1_19) - (var_1_16))) - (/* 6L, 207L, 220L, 691L, 722L, 837L, 1011L) */ (min (/* 6L, 207L, 220L, 691L, 722L, 837L, 1011L) */ (var_1_18) , (32)))));
	signed char stepLocal_3 = var_1_2;
	/* 37L, 251L, 677L, 708L, 855L, 1037L) */ if (/* 19L, 187L, 188L, 678L, 709L, 831L, 1020L) */ ((stepLocal_3) > (/* 18L, 186L, 190L, 680L, 711L, 830L, 1019L) */ ((/* 16L, 184L, 191L, 681L, 712L, 828L, 1017L) */ ((64) - (var_1_18))) - (var_1_16))))) {
		/* 32L, 245L, 685L, 716L, 850L, 1032L) */ if (/* 27L, 214L, 215L, 686L, 717L, 845L, 1027L) */ ((stepLocal_4) >= (/* 26L, 213L, 223L, 694L, 725L, 844L, 1026L) */ (min (/* 26L, 213L, 223L, 694L, 725L, 844L, 1026L) */ (last_1_var_1_20) , (/* 25L, 212L, 225L, 696L, 727L, 843L, 1025L) */ ((var_1_8) / (var_1_11)))))))) {
			/* 31L, 244L, 699L, 730L, 849L, 1031L) */ var_1_17 = (
				var_1_9
			);
		}
	} else {
		/* 36L, 250L, 703L, 734L, 854L, 1036L) */ var_1_17 = (
			var_1_9
		);
	}


	// From: CodeObject5
	/* 257L) */ if (/* 230L, 229L) */ ((/* 231L, 223L) */ (max (/* 231L, 223L) */ (/* 232L, 221L) */ ((var_1_32) / (var_1_33))) , (var_1_34)))) >= (/* 236L, 228L) */ ((var_1_35) * (/* 238L, 227L) */ ((var_1_36) * (var_1_37))))))) {
		/* 256L) */ var_1_31 = (
			/* 255L) */ (abs (
				var_1_28
			))
		);
	}


	// From: CodeObject8
	/* 300L) */ var_1_44 = (
		var_1_30
	);


	// From: Req7Batch198Filler_PR_CN
	/* 1043L, 260L, 802L, 808L) */ var_1_20 = (
		var_1_17
	);


	// From: CodeObject3
	/* 183L) */ if (/* 161L, 160L) */ ((var_1_25) != (var_1_23))) {
		/* 181L) */ if (var_1_22) {
			/* 173L) */ var_1_27 = (
				var_1_26
			);
		} else {
			/* 180L) */ var_1_27 = (
				/* 179L) */ (abs (
					/* 178L) */ ((
						var_1_28
					) - (
						var_1_21
					))
				))
			);
		}
	}


	// From: Req1Batch198Filler_PR_CN
	/* 892L, 11L, 268L, 282L) */ var_1_1 = (
		/* 895L, 10L, 271L, 285L) */ (min (
			/* 895L, 10L, 271L, 285L) */ (
				8
			) , (
				/* 897L, 9L, 273L, 287L) */ ((
					var_1_2
				) + (
					/* 899L, 8L, 275L, 289L) */ ((
						var_1_3
					) + (
						var_1_4
					))
				))
			)
		))
	);


	// From: CodeObject4
	/* 215L) */ if (var_1_22) {
		/* 213L) */ if (/* 193L, 192L) */ ((var_1_27) >= (var_1_28))) {
			/* 208L) */ var_1_29 = (
				/* 207L) */ ((
					/* 205L) */ ((
						var_1_28
					) > (
						/* 204L) */ ((
							var_1_25
						) & (
							2
						))
					))
				) || (
					var_1_30
				))
			);
		} else {
			/* 212L) */ var_1_29 = (
				var_1_30
			);
		}
	}


	// From: CodeObject7
	/* 293L) */ if (var_1_38) {
		/* 284L) */ var_1_39 = (
			/* 283L) */ ((
				/* 279L) */ ((
					9.5
				) - (
					var_1_40
				))
			) + (
				/* 282L) */ ((
					3.375
				) + (
					var_1_41
				))
			))
		);
	} else {
		/* 292L) */ var_1_39 = (
			/* 291L) */ (max (
				/* 291L) */ (
					var_1_40
				) , (
					/* 290L) */ ((
						var_1_42
					) - (
						var_1_43
					))
				)
			))
		);
	}


	// From: Req3Batch198Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_8;
	signed long int stepLocal_0 = /* 923L, 73L, 77L, 406L, 441L) */ (max (/* 923L, 73L, 77L, 406L, 441L) */ (var_1_8) , (var_1_20)));
	/* 959L, 111L, 397L, 432L) */ if (/* 931L, 60L, 61L, 398L, 433L) */ ((stepLocal_1) > (var_1_20))) {
		/* 954L, 105L, 401L, 436L) */ if (var_1_6) {
			/* 949L, 99L, 403L, 438L) */ if (/* 934L, 74L, 75L, 404L, 439L) */ ((var_1_9) <= (stepLocal_0))) {
				/* 938L, 88L, 409L, 444L) */ var_1_10 = (
					var_1_20
				);
			} else {
				/* 948L, 98L, 413L, 448L) */ var_1_10 = (
					/* 947L, 97L, 416L, 451L) */ ((
						/* 945L, 95L, 417L, 452L) */ ((
							var_1_20
						) - (
							/* 944L, 94L, 419L, 454L) */ ((
								var_1_11
							) - (
								var_1_8
							))
						))
					) + (
						16
					))
				);
			}
		} else {
			/* 953L, 104L, 423L, 458L) */ var_1_10 = (
				var_1_8
			);
		}
	} else {
		/* 958L, 110L, 427L, 462L) */ var_1_10 = (
			var_1_20
		);
	}


	// From: Req4Batch198Filler_PR_CN
	signed long int stepLocal_2 = var_1_10;
	/* 983L, 146L, 537L, 556L) */ if (/* 968L, 119L, 120L, 538L, 557L) */ ((stepLocal_2) > (var_1_9))) {
		/* 978L, 140L, 541L, 560L) */ if (var_1_6) {
			/* 977L, 139L, 543L, 562L) */ var_1_12 = (
				/* 976L, 138L, 546L, 565L) */ ((
					var_1_13
				) - (
					/* 975L, 137L, 548L, 567L) */ (max (
						/* 975L, 137L, 548L, 567L) */ (
							var_1_11
						) , (
							var_1_9
						)
					))
				))
			);
		}
	} else {
		/* 982L, 145L, 551L, 570L) */ var_1_12 = (
			var_1_8
		);
	}


	// From: CodeObject6
	/* 268L) */ if (var_1_22) {
		/* 267L) */ var_1_38 = (
			0
		);
	}


	// From: Req5Batch198Filler_PR_CN
	/* 990L, 169L, 616L, 632L) */ if (/* 991L, 154L, 155L, 617L, 633L) */ ((var_1_6) && (var_1_15))) {
		/* 994L, 168L, 620L, 636L) */ var_1_14 = (
			/* 997L, 167L, 623L, 639L) */ ((
				/* 998L, 165L, 624L, 640L) */ ((
					64
				) - (
					4
				))
			) + (
				var_1_16
			))
		);
	}


	// From: CodeObject1
	/* 97L) */ if (/* 81L, 80L) */ ((8u) < (/* 83L, 79L) */ (abs (/* 84L, 78L) */ ((var_1_23) * (2u))))))) {
		/* 96L) */ var_1_21 = (
			var_1_24
		);
	}


	// From: Req2Batch198Filler_PR_CN
	/* 904L, 50L, 322L, 341L) */ if (/* 905L, 27L, 28L, 323L, 342L) */ ((var_1_6) && (/* 907L, 26L, 30L, 325L, 344L) */ ((/* 908L, 24L, 31L, 326L, 345L) */ (abs (var_1_12))) != (var_1_4))))) {
		/* 911L, 45L, 329L, 348L) */ var_1_5 = (
			/* 914L, 44L, 332L, 351L) */ (max (
				/* 914L, 44L, 332L, 351L) */ (
					var_1_8
				) , (
					var_1_9
				)
			))
		);
	} else {
		/* 917L, 49L, 335L, 354L) */ var_1_5 = (
			var_1_9
		);
	}


	// From: CodeObject2
	/* 154L) */ if (/* 111L, 110L) */ ((/* 112L, 108L) */ ((/* 113L, 104L) */ (abs (var_1_23))) * (/* 115L, 107L) */ (abs (var_1_24))))) < (var_1_21))) {
		/* 148L) */ if (/* 130L, 129L) */ ((/* 131L, 127L) */ ((var_1_21) % (var_1_26))) > (var_1_24))) {
			/* 143L) */ var_1_25 = (
				var_1_24
			);
		} else {
			/* 147L) */ var_1_25 = (
				8
			);
		}
	} else {
		/* 153L) */ var_1_25 = (
			var_1_26
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -63);
	assume_abort_if_not(var_1_2 <= 63);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -31);
	assume_abort_if_not(var_1_3 <= 32);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -31);
	assume_abort_if_not(var_1_4 <= 31);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 536870911);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 64);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 49151);
	assume_abort_if_not(var_1_19 <= 65535);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 255);
	assume_abort_if_not(var_1_26 != 0);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 319L, 27L, 34L, 361L, 380L, 1064L) */ ((var_1_6) && (/* 321L, 26L, 36L, 363L, 382L, 1066L) */ ((/* 322L, 24L, 37L, 364L, 383L, 1067L) */ (abs (var_1_12))) != (var_1_4))))) {
	} else {
	}
	if (/* 337L, 60L, 64L, 468L, 503L, 1082L) */ ((var_1_8) > (var_1_20))) {
		if (var_1_6) {
			if (/* 343L, 74L, 80L, 474L, 509L, 1088L) */ ((var_1_9) <= (/* 345L, 73L, 82L, 476L, 511L, 1090L) */ (max (/* 345L, 73L, 82L, 476L, 511L, 1090L) */ (var_1_8) , (var_1_20)))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 372L, 119L, 123L, 576L, 595L, 1117L) */ ((var_1_10) > (var_1_9))) {
		if (var_1_6) {
		}
	} else {
	}
	if (/* 394L, 154L, 158L, 649L, 665L, 1139L) */ ((var_1_6) && (var_1_15))) {
	}
	if (/* 407L, 187L, 195L, 740L, 771L, 863L, 1152L, 46L) */ ((var_1_2) > (/* 409L, 186L, 197L, 742L, 773L, 862L, 1154L, 45L) */ ((/* 410L, 184L, 198L, 743L, 774L, 860L, 1155L, 43L) */ ((64) - (var_1_18))) - (var_1_16))))) {
		if (/* 415L, 214L, 228L, 748L, 779L, 877L, 1160L, 60L) */ ((/* 416L, 208L, 229L, 749L, 780L, 870L, 1161L, 53L) */ ((/* 417L, 204L, 230L, 750L, 781L, 866L, 1162L, 49L) */ ((var_1_19) - (var_1_16))) - (/* 420L, 207L, 233L, 753L, 784L, 869L, 1165L, 52L) */ (min (/* 420L, 207L, 233L, 753L, 784L, 869L, 1165L, 52L) */ (var_1_18) , (32)))))) >= (/* 423L, 213L, 236L, 756L, 787L, 876L, 1168L, 59L) */ (min (/* 423L, 213L, 236L, 756L, 787L, 876L, 1168L, 59L) */ (last_1_var_1_20) , (/* 426L, 212L, 238L, 758L, 789L, 875L, 1171L, 58L) */ ((var_1_8) / (var_1_11)))))))) {
		}
	} else {
	}
	return /* 449L) */ ((
	/* 448L) */ ((
		/* 447L) */ ((
			/* 446L) */ ((
				/* 445L) */ ((
					/* 444L) */ ((
						/* 306L, 11L, 296L, 310L, 1051L) */ ((
							var_1_1
						) == (
							/* 306L, 11L, 296L, 310L, 1051L) */ ((signed char) (
								/* 309L, 10L, 299L, 313L, 1054L) */ (min (
									/* 309L, 10L, 299L, 313L, 1054L) */ (
										8
									) , (
										/* 311L, 9L, 301L, 315L, 1056L) */ ((
											var_1_2
										) + (
											/* 313L, 8L, 303L, 317L, 1058L) */ ((
												var_1_3
											) + (
												var_1_4
											))
										))
									)
								))
							))
						))
					) && (
						/* 318L, 51L, 360L, 379L, 1063L) */ ((
							/* 319L, 27L, 34L, 361L, 380L, 1064L) */ ((
								var_1_6
							) && (
								/* 321L, 26L, 36L, 363L, 382L, 1066L) */ ((
									/* 322L, 24L, 37L, 364L, 383L, 1067L) */ (abs (
										var_1_12
									))
								) != (
									var_1_4
								))
							))
						) ? (
							/* 325L, 45L, 367L, 386L, 1070L) */ ((
								var_1_5
							) == (
								/* 325L, 45L, 367L, 386L, 1070L) */ ((unsigned short int) (
									/* 328L, 44L, 370L, 389L, 1073L) */ (max (
										/* 328L, 44L, 370L, 389L, 1073L) */ (
											var_1_8
										) , (
											var_1_9
										)
									))
								))
							))
						) : (
							/* 331L, 49L, 373L, 392L, 1076L) */ ((
								var_1_5
							) == (
								/* 331L, 49L, 373L, 392L, 1076L) */ ((unsigned short int) (
									var_1_9
								))
							))
						))
					))
				) && (
					/* 336L, 112L, 467L, 502L, 1081L) */ ((
						/* 337L, 60L, 64L, 468L, 503L, 1082L) */ ((
							var_1_8
						) > (
							var_1_20
						))
					) ? (
						/* 340L, 106L, 471L, 506L, 1085L) */ ((
							var_1_6
						) ? (
							/* 342L, 100L, 473L, 508L, 1087L) */ ((
								/* 343L, 74L, 80L, 474L, 509L, 1088L) */ ((
									var_1_9
								) <= (
									/* 345L, 73L, 82L, 476L, 511L, 1090L) */ (max (
										/* 345L, 73L, 82L, 476L, 511L, 1090L) */ (
											var_1_8
										) , (
											var_1_20
										)
									))
								))
							) ? (
								/* 348L, 88L, 479L, 514L, 1093L) */ ((
									var_1_10
								) == (
									/* 348L, 88L, 479L, 514L, 1093L) */ ((signed long int) (
										var_1_20
									))
								))
							) : (
								/* 352L, 98L, 483L, 518L, 1097L) */ ((
									var_1_10
								) == (
									/* 352L, 98L, 483L, 518L, 1097L) */ ((signed long int) (
										/* 355L, 97L, 486L, 521L, 1100L) */ ((
											/* 356L, 95L, 487L, 522L, 1101L) */ ((
												var_1_20
											) - (
												/* 358L, 94L, 489L, 524L, 1103L) */ ((
													var_1_11
												) - (
													var_1_8
												))
											))
										) + (
											16
										))
									))
								))
							))
						) : (
							/* 362L, 104L, 493L, 528L, 1107L) */ ((
								var_1_10
							) == (
								/* 362L, 104L, 493L, 528L, 1107L) */ ((signed long int) (
									var_1_8
								))
							))
						))
					) : (
						/* 366L, 110L, 497L, 532L, 1111L) */ ((
							var_1_10
						) == (
							/* 366L, 110L, 497L, 532L, 1111L) */ ((signed long int) (
								var_1_20
							))
						))
					))
				))
			) && (
				/* 371L, 147L, 575L, 594L, 1116L) */ ((
					/* 372L, 119L, 123L, 576L, 595L, 1117L) */ ((
						var_1_10
					) > (
						var_1_9
					))
				) ? (
					/* 375L, 141L, 579L, 598L, 1120L) */ ((
						var_1_6
					) ? (
						/* 377L, 139L, 581L, 600L, 1122L) */ ((
							var_1_12
						) == (
							/* 377L, 139L, 581L, 600L, 1122L) */ ((unsigned long int) (
								/* 380L, 138L, 584L, 603L, 1125L) */ ((
									var_1_13
								) - (
									/* 382L, 137L, 586L, 605L, 1127L) */ (max (
										/* 382L, 137L, 586L, 605L, 1127L) */ (
											var_1_11
										) , (
											var_1_9
										)
									))
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 385L, 145L, 589L, 608L, 1130L) */ ((
						var_1_12
					) == (
						/* 385L, 145L, 589L, 608L, 1130L) */ ((unsigned long int) (
							var_1_8
						))
					))
				))
			))
		) && (
			/* 393L, 170L, 648L, 664L, 1138L) */ ((
				/* 394L, 154L, 158L, 649L, 665L, 1139L) */ ((
					var_1_6
				) && (
					var_1_15
				))
			) ? (
				/* 397L, 168L, 652L, 668L, 1142L) */ ((
					var_1_14
				) == (
					/* 397L, 168L, 652L, 668L, 1142L) */ ((unsigned char) (
						/* 400L, 167L, 655L, 671L, 1145L) */ ((
							/* 401L, 165L, 656L, 672L, 1146L) */ ((
								64
							) - (
								4
							))
						) + (
							var_1_16
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 406L, 252L, 739L, 770L, 887L, 1151L, 70L) */ ((
			/* 407L, 187L, 195L, 740L, 771L, 863L, 1152L, 46L) */ ((
				var_1_2
			) > (
				/* 409L, 186L, 197L, 742L, 773L, 862L, 1154L, 45L) */ ((
					/* 410L, 184L, 198L, 743L, 774L, 860L, 1155L, 43L) */ ((
						64
					) - (
						var_1_18
					))
				) - (
					var_1_16
				))
			))
		) ? (
			/* 414L, 246L, 747L, 778L, 882L, 1159L, 65L) */ ((
				/* 415L, 214L, 228L, 748L, 779L, 877L, 1160L, 60L) */ ((
					/* 416L, 208L, 229L, 749L, 780L, 870L, 1161L, 53L) */ ((
						/* 417L, 204L, 230L, 750L, 781L, 866L, 1162L, 49L) */ ((
							var_1_19
						) - (
							var_1_16
						))
					) - (
						/* 420L, 207L, 233L, 753L, 784L, 869L, 1165L, 52L) */ (min (
							/* 420L, 207L, 233L, 753L, 784L, 869L, 1165L, 52L) */ (
								var_1_18
							) , (
								32
							)
						))
					))
				) >= (
					/* 423L, 213L, 236L, 756L, 787L, 876L, 1168L, 59L) */ (min (
						/* 423L, 213L, 236L, 756L, 787L, 876L, 1168L, 59L) */ (
							last_1_var_1_20
						) , (
							/* 426L, 212L, 238L, 758L, 789L, 875L, 1171L, 58L) */ ((
								var_1_8
							) / (
								var_1_11
							))
						)
					))
				))
			) ? (
				/* 429L, 244L, 761L, 792L, 881L, 1174L, 64L) */ ((
					var_1_17
				) == (
					/* 429L, 244L, 761L, 792L, 881L, 1174L, 64L) */ ((unsigned short int) (
						var_1_9
					))
				))
			) : (
				1
			))
		) : (
			/* 433L, 250L, 765L, 796L, 886L, 1178L, 69L) */ ((
				var_1_17
			) == (
				/* 433L, 250L, 765L, 796L, 886L, 1178L, 69L) */ ((unsigned short int) (
					var_1_9
				))
			))
		))
	))
) && (
	/* 439L, 260L, 814L, 820L, 1184L) */ ((
		var_1_20
	) == (
		/* 439L, 260L, 814L, 820L, 1184L) */ ((signed long int) (
			var_1_17
		))
	))
))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
