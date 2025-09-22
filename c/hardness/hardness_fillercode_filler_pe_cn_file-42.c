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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Filler_PE_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -200;
signed short int var_1_4 = 2;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
signed short int var_1_24 = -32;
unsigned char var_1_25 = 1;
float var_1_26 = 500.65;
signed long int var_1_27 = -8;
float var_1_28 = 255.5;
float var_1_29 = 7.5;
float var_1_30 = 9.8;
unsigned char var_1_31 = 4;
signed long int var_1_32 = 1;
unsigned char var_1_33 = 2;
unsigned short int var_1_34 = 1;
unsigned long int var_1_35 = 10;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 10;
unsigned short int var_1_41 = 128;
unsigned short int var_1_42 = 40597;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_8 = 1;
unsigned short int last_1_var_1_17 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch42Filler_PE_CN
	signed long int stepLocal_4 = last_1_var_1_17;
	signed long int stepLocal_3 = last_1_var_1_17;
	/* 105L, 161L, 543L, 570L, 945L, 1081L) */ if (/* 82L, 114L, 115L, 544L, 571L, 921L, 1059L) */ ((stepLocal_3) >= (/* 81L, 113L, 117L, 546L, 573L, 920L, 1058L) */ ((last_1_var_1_17) / (var_1_7))))) {
		/* 100L, 155L, 549L, 576L, 940L, 1076L) */ if (/* 90L, 132L, 133L, 550L, 577L, 930L, 1066L) */ ((stepLocal_4) != (/* 89L, 131L, 135L, 552L, 579L, 929L, 1065L) */ (max (/* 89L, 131L, 135L, 552L, 579L, 929L, 1065L) */ (/* 87L, 129L, 136L, 553L, 580L, 927L, 1063L) */ (max (/* 87L, 129L, 136L, 553L, 580L, 927L, 1063L) */ (var_1_3) , (last_1_var_1_17)))) , (var_1_5)))))) {
			/* 94L, 150L, 557L, 584L, 934L, 1070L) */ var_1_13 = (
				var_1_7
			);
		} else {
			/* 99L, 154L, 561L, 588L, 939L, 1075L) */ var_1_13 = (
				last_1_var_1_17
			);
		}
	} else {
		/* 104L, 160L, 565L, 592L, 944L, 1080L) */ var_1_13 = (
			var_1_3
		);
	}


	// From: Req6Batch42Filler_PE_CN
	signed short int stepLocal_7 = var_1_3;
	/* 1136L, 236L, 759L, 772L) */ if (/* 1127L, 221L, 222L, 760L, 773L) */ ((var_1_4) > (stepLocal_7))) {
		/* 1135L, 235L, 763L, 776L) */ var_1_17 = (
			/* 1134L, 234L, 766L, 779L) */ (max (
				/* 1134L, 234L, 766L, 779L) */ (
					25
				) , (
					/* 1133L, 233L, 768L, 781L) */ ((
						var_1_13
					) + (
						var_1_18
					))
				)
			))
		);
	}


	// From: Req5Batch42Filler_PE_CN
	signed long int stepLocal_6 = last_1_var_1_1;
	unsigned char stepLocal_5 = /* 10L, 171L, 175L, 653L, 680L, 860L, 1087L) */ ((/* 8L, 169L, 176L, 654L, 681L, 858L, 1088L) */ (min (/* 8L, 169L, 176L, 654L, 681L, 858L, 1088L) */ (last_1_var_1_1) , (8)))) <= (var_1_5));
	/* 35L, 213L, 651L, 678L, 883L, 1118L) */ if (/* 16L, 173L, 174L, 652L, 679L, 863L, 1100L) */ ((stepLocal_5) || (last_1_var_1_8))) {
		/* 30L, 207L, 659L, 686L, 878L, 1113L) */ if (/* 19L, 190L, 191L, 660L, 687L, 867L, 1102L) */ ((stepLocal_6) <= (var_1_3))) {
			/* 25L, 202L, 663L, 690L, 873L, 1108L) */ var_1_14 = (
				/* 24L, 201L, 666L, 693L, 872L, 1107L) */ ((
					var_1_15
				) + (
					var_1_16
				))
			);
		} else {
			/* 29L, 206L, 669L, 696L, 877L, 1112L) */ var_1_14 = (
				var_1_16
			);
		}
	} else {
		/* 34L, 212L, 673L, 700L, 882L, 1117L) */ var_1_14 = (
			var_1_16
		);
	}


	// From: Req3Batch42Filler_PE_CN
	unsigned char stepLocal_2 = var_1_7;
	unsigned char stepLocal_1 = /* 1014L, 63L, 69L, 440L, 467L) */ ((var_1_2) && (var_1_10));
	/* 1042L, 104L, 435L, 462L) */ if (/* 1024L, 64L, 65L, 436L, 463L) */ ((/* 1023L, 60L, 66L, 437L, 464L) */ ((49.5f) <= (var_1_14))) && (stepLocal_1))) {
		/* 1037L, 98L, 443L, 470L) */ if (/* 1026L, 81L, 82L, 444L, 471L) */ ((var_1_13) < (stepLocal_2))) {
			/* 1032L, 93L, 447L, 474L) */ var_1_8 = (
				/* 1031L, 92L, 450L, 477L) */ ((
					var_1_2
				) || (
					var_1_11
				))
			);
		} else {
			/* 1036L, 97L, 453L, 480L) */ var_1_8 = (
				var_1_11
			);
		}
	} else {
		/* 1041L, 103L, 457L, 484L) */ var_1_8 = (
			var_1_12
		);
	}


	// From: Req7Batch42Filler_PE_CN
	/* 1140L, 257L, 811L, 822L) */ if (/* 1141L, 244L, 245L, 812L, 823L) */ ((var_1_14) <= (var_1_15))) {
		/* 1144L, 256L, 815L, 826L) */ var_1_19 = (
			/* 1147L, 255L, 818L, 829L) */ ((
				var_1_12
			) || (
				var_1_20
			))
		);
	}


	// From: Req1Batch42Filler_PE_CN
	signed short int stepLocal_0 = var_1_3;
	/* 997L, 29L, 261L, 279L) */ if (var_1_19) {
		/* 988L, 10L, 263L, 281L) */ var_1_1 = (
			/* 987L, 9L, 266L, 284L) */ (max (
				/* 987L, 9L, 266L, 284L) */ (
					var_1_3
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 996L, 27L, 269L, 287L) */ if (/* 991L, 14L, 15L, 270L, 288L) */ ((/* 990L, 12L, 16L, 271L, 289L) */ (abs (var_1_5))) >= (stepLocal_0))) {
			/* 995L, 26L, 274L, 292L) */ var_1_1 = (
				var_1_5
			);
		}
	}


	// From: Req2Batch42Filler_PE_CN
	/* 1002L, 50L, 334L, 346L) */ if (/* 1003L, 37L, 38L, 335L, 347L) */ ((var_1_5) >= (-2))) {
		/* 1006L, 49L, 338L, 350L) */ var_1_6 = (
			/* 1009L, 48L, 341L, 353L) */ ((
				var_1_7
			) - (
				100
			))
		);
	}


	// From: CodeObject1
	/* 159L) */ if (/* 145L, 144L) */ ((var_1_22) || (var_1_23))) {
		/* 158L) */ var_1_21 = (
			/* 157L) */ ((
				/* 155L) */ ((
					var_1_24
				) > (
					-4
				))
			) || (
				var_1_25
			))
		);
	}


	// From: CodeObject2
	/* 193L) */ if (/* 172L, 171L) */ ((/* 173L, 169L) */ ((/* 174L, 167L) */ ((var_1_24) + (25))) % (var_1_27))) < (2))) {
		/* 192L) */ var_1_26 = (
			/* 191L) */ ((
				/* 189L) */ (abs (
					var_1_28
				))
			) + (
				var_1_29
			))
		);
	}


	// From: CodeObject3
	/* 219L) */ if (/* 203L, 202L) */ ((/* 204L, 198L) */ (- (var_1_28))) < (/* 206L, 201L) */ (max (/* 206L, 201L) */ (var_1_26) , (var_1_29)))))) {
		/* 218L) */ var_1_30 = (
			var_1_29
		);
	}


	// From: CodeObject4
	/* 247L) */ if (/* 231L, 230L) */ ((/* 232L, 228L) */ (min (/* 232L, 228L) */ (/* 233L, 226L) */ (abs (var_1_27))) , (var_1_24)))) <= (var_1_32))) {
		/* 246L) */ var_1_31 = (
			var_1_33
		);
	}


	// From: CodeObject5
	/* 270L) */ if (/* 255L, 254L) */ ((var_1_31) < (/* 257L, 253L) */ (abs (var_1_24))))) {
		/* 269L) */ var_1_34 = (
			/* 268L) */ (max (
				/* 268L) */ (
					/* 266L) */ (abs (
						var_1_31
					))
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject6
	/* 281L) */ if (var_1_25) {
		/* 280L) */ var_1_35 = (
			var_1_33
		);
	}


	// From: CodeObject7
	/* 301L) */ if (var_1_25) {
		/* 293L) */ var_1_36 = (
			/* 292L) */ ((
				var_1_37
			) - (
				var_1_38
			))
		);
	} else {
		/* 300L) */ var_1_36 = (
			/* 299L) */ ((
				var_1_37
			) - (
				/* 298L) */ (abs (
					var_1_39
				))
			))
		);
	}


	// From: CodeObject8
	/* 321L) */ if (/* 309L, 308L) */ ((/* 310L, 306L) */ (- (var_1_36))) != (var_1_34))) {
		/* 320L) */ var_1_40 = (
			var_1_39
		);
	}


	// From: CodeObject9
	/* 362L) */ if (/* 329L, 328L) */ ((var_1_33) <= (/* 331L, 327L) */ (~ (var_1_34))))) {
		/* 356L) */ if (/* 341L, 340L) */ ((/* 342L, 338L) */ (abs (var_1_39))) >= (var_1_38))) {
			/* 355L) */ var_1_41 = (
				/* 354L) */ (abs (
					/* 353L) */ ((
						var_1_42
					) - (
						var_1_38
					))
				))
			);
		}
	} else {
		/* 361L) */ var_1_41 = (
			var_1_36
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32767);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 32767);
	assume_abort_if_not(var_1_42 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (var_1_19) {
	} else {
		if (/* 375L, 14L, 19L, 306L, 324L, 1160L) */ ((/* 376L, 12L, 20L, 307L, 325L, 1161L) */ (abs (var_1_5))) >= (var_1_3))) {
		}
	}
	if (/* 386L, 37L, 41L, 359L, 371L, 1171L) */ ((var_1_5) >= (-2))) {
	}
	if (/* 397L, 64L, 72L, 490L, 517L, 1182L) */ ((/* 398L, 60L, 73L, 491L, 518L, 1183L) */ ((49.5f) <= (var_1_14))) && (/* 401L, 63L, 76L, 494L, 521L, 1186L) */ ((var_1_2) && (var_1_10))))) {
		if (/* 405L, 81L, 85L, 498L, 525L, 1190L) */ ((var_1_13) < (var_1_7))) {
		} else {
		}
	} else {
	}
	if (/* 424L, 114L, 120L, 598L, 625L, 953L, 1209L, 114L) */ ((last_1_var_1_17) >= (/* 427L, 113L, 122L, 600L, 627L, 952L, 1212L, 113L) */ ((last_1_var_1_17) / (var_1_7))))) {
		if (/* 432L, 132L, 140L, 604L, 631L, 962L, 1217L, 123L) */ ((last_1_var_1_17) != (/* 435L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (max (/* 435L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (/* 436L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (max (/* 436L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (var_1_3) , (last_1_var_1_17)))) , (var_1_5)))))) {
		} else {
		}
	} else {
	}
	if (/* 456L, 173L, 181L, 706L, 733L, 893L, 1241L, 46L) */ ((/* 457L, 171L, 182L, 707L, 734L, 890L, 1242L, 43L) */ ((/* 458L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (min (/* 458L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (last_1_var_1_1) , (8)))) <= (var_1_5))) || (last_1_var_1_8))) {
		if (/* 466L, 190L, 194L, 714L, 741L, 897L, 1251L, 50L) */ ((last_1_var_1_1) <= (var_1_3))) {
		} else {
		}
	} else {
	}
	if (/* 486L, 221L, 225L, 786L, 799L, 1271L) */ ((var_1_4) > (var_1_3))) {
	}
	if (/* 499L, 244L, 248L, 834L, 845L, 1284L) */ ((var_1_14) <= (var_1_15))) {
	}
	return /* 514L) */ ((
	/* 513L) */ ((
		/* 512L) */ ((
			/* 511L) */ ((
				/* 510L) */ ((
					/* 509L) */ ((
						/* 366L, 30L, 297L, 315L, 1151L) */ ((
							var_1_19
						) ? (
							/* 368L, 10L, 299L, 317L, 1153L) */ ((
								var_1_1
							) == (
								/* 368L, 10L, 299L, 317L, 1153L) */ ((signed short int) (
									/* 371L, 9L, 302L, 320L, 1156L) */ (max (
										/* 371L, 9L, 302L, 320L, 1156L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								))
							))
						) : (
							/* 374L, 28L, 305L, 323L, 1159L) */ ((
								/* 375L, 14L, 19L, 306L, 324L, 1160L) */ ((
									/* 376L, 12L, 20L, 307L, 325L, 1161L) */ (abs (
										var_1_5
									))
								) >= (
									var_1_3
								))
							) ? (
								/* 379L, 26L, 310L, 328L, 1164L) */ ((
									var_1_1
								) == (
									/* 379L, 26L, 310L, 328L, 1164L) */ ((signed short int) (
										var_1_5
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 385L, 51L, 358L, 370L, 1170L) */ ((
							/* 386L, 37L, 41L, 359L, 371L, 1171L) */ ((
								var_1_5
							) >= (
								-2
							))
						) ? (
							/* 389L, 49L, 362L, 374L, 1174L) */ ((
								var_1_6
							) == (
								/* 389L, 49L, 362L, 374L, 1174L) */ ((unsigned char) (
									/* 392L, 48L, 365L, 377L, 1177L) */ ((
										var_1_7
									) - (
										100
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 396L, 105L, 489L, 516L, 1181L) */ ((
						/* 397L, 64L, 72L, 490L, 517L, 1182L) */ ((
							/* 398L, 60L, 73L, 491L, 518L, 1183L) */ ((
								49.5f
							) <= (
								var_1_14
							))
						) && (
							/* 401L, 63L, 76L, 494L, 521L, 1186L) */ ((
								var_1_2
							) && (
								var_1_10
							))
						))
					) ? (
						/* 404L, 99L, 497L, 524L, 1189L) */ ((
							/* 405L, 81L, 85L, 498L, 525L, 1190L) */ ((
								var_1_13
							) < (
								var_1_7
							))
						) ? (
							/* 408L, 93L, 501L, 528L, 1193L) */ ((
								var_1_8
							) == (
								/* 408L, 93L, 501L, 528L, 1193L) */ ((unsigned char) (
									/* 411L, 92L, 504L, 531L, 1196L) */ ((
										var_1_2
									) || (
										var_1_11
									))
								))
							))
						) : (
							/* 414L, 97L, 507L, 534L, 1199L) */ ((
								var_1_8
							) == (
								/* 414L, 97L, 507L, 534L, 1199L) */ ((unsigned char) (
									var_1_11
								))
							))
						))
					) : (
						/* 418L, 103L, 511L, 538L, 1203L) */ ((
							var_1_8
						) == (
							/* 418L, 103L, 511L, 538L, 1203L) */ ((unsigned char) (
								var_1_12
							))
						))
					))
				))
			) && (
				/* 423L, 162L, 597L, 624L, 977L, 1208L, 138L) */ ((
					/* 424L, 114L, 120L, 598L, 625L, 953L, 1209L, 114L) */ ((
						last_1_var_1_17
					) >= (
						/* 427L, 113L, 122L, 600L, 627L, 952L, 1212L, 113L) */ ((
							last_1_var_1_17
						) / (
							var_1_7
						))
					))
				) ? (
					/* 431L, 156L, 603L, 630L, 972L, 1216L, 133L) */ ((
						/* 432L, 132L, 140L, 604L, 631L, 962L, 1217L, 123L) */ ((
							last_1_var_1_17
						) != (
							/* 435L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (max (
								/* 435L, 131L, 142L, 606L, 633L, 961L, 1220L, 122L) */ (
									/* 436L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (max (
										/* 436L, 129L, 143L, 607L, 634L, 959L, 1221L, 120L) */ (
											var_1_3
										) , (
											last_1_var_1_17
										)
									))
								) , (
									var_1_5
								)
							))
						))
					) ? (
						/* 441L, 150L, 611L, 638L, 966L, 1226L, 127L) */ ((
							var_1_13
						) == (
							/* 441L, 150L, 611L, 638L, 966L, 1226L, 127L) */ ((signed short int) (
								var_1_7
							))
						))
					) : (
						/* 445L, 154L, 615L, 642L, 971L, 1230L, 132L) */ ((
							var_1_13
						) == (
							/* 445L, 154L, 615L, 642L, 971L, 1230L, 132L) */ ((signed short int) (
								last_1_var_1_17
							))
						))
					))
				) : (
					/* 450L, 160L, 619L, 646L, 976L, 1235L, 137L) */ ((
						var_1_13
					) == (
						/* 450L, 160L, 619L, 646L, 976L, 1235L, 137L) */ ((signed short int) (
							var_1_3
						))
					))
				))
			))
		) && (
			/* 455L, 214L, 705L, 732L, 913L, 1240L, 66L) */ ((
				/* 456L, 173L, 181L, 706L, 733L, 893L, 1241L, 46L) */ ((
					/* 457L, 171L, 182L, 707L, 734L, 890L, 1242L, 43L) */ ((
						/* 458L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (min (
							/* 458L, 169L, 183L, 708L, 735L, 888L, 1243L, 41L) */ (
								last_1_var_1_1
							) , (
								8
							)
						))
					) <= (
						var_1_5
					))
				) || (
					last_1_var_1_8
				))
			) ? (
				/* 465L, 208L, 713L, 740L, 908L, 1250L, 61L) */ ((
					/* 466L, 190L, 194L, 714L, 741L, 897L, 1251L, 50L) */ ((
						last_1_var_1_1
					) <= (
						var_1_3
					))
				) ? (
					/* 470L, 202L, 717L, 744L, 903L, 1255L, 56L) */ ((
						var_1_14
					) == (
						/* 470L, 202L, 717L, 744L, 903L, 1255L, 56L) */ ((float) (
							/* 473L, 201L, 720L, 747L, 902L, 1258L, 55L) */ ((
								var_1_15
							) + (
								var_1_16
							))
						))
					))
				) : (
					/* 476L, 206L, 723L, 750L, 907L, 1261L, 60L) */ ((
						var_1_14
					) == (
						/* 476L, 206L, 723L, 750L, 907L, 1261L, 60L) */ ((float) (
							var_1_16
						))
					))
				))
			) : (
				/* 480L, 212L, 727L, 754L, 912L, 1265L, 65L) */ ((
					var_1_14
				) == (
					/* 480L, 212L, 727L, 754L, 912L, 1265L, 65L) */ ((float) (
						var_1_16
					))
				))
			))
		))
	) && (
		/* 485L, 237L, 785L, 798L, 1270L) */ ((
			/* 486L, 221L, 225L, 786L, 799L, 1271L) */ ((
				var_1_4
			) > (
				var_1_3
			))
		) ? (
			/* 489L, 235L, 789L, 802L, 1274L) */ ((
				var_1_17
			) == (
				/* 489L, 235L, 789L, 802L, 1274L) */ ((unsigned short int) (
					/* 492L, 234L, 792L, 805L, 1277L) */ (max (
						/* 492L, 234L, 792L, 805L, 1277L) */ (
							25
						) , (
							/* 494L, 233L, 794L, 807L, 1279L) */ ((
								var_1_13
							) + (
								var_1_18
							))
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 498L, 258L, 833L, 844L, 1283L) */ ((
		/* 499L, 244L, 248L, 834L, 845L, 1284L) */ ((
			var_1_14
		) <= (
			var_1_15
		))
	) ? (
		/* 502L, 256L, 837L, 848L, 1287L) */ ((
			var_1_19
		) == (
			/* 502L, 256L, 837L, 848L, 1287L) */ ((unsigned char) (
				/* 505L, 255L, 840L, 851L, 1290L) */ ((
					var_1_12
				) || (
					var_1_20
				))
			))
		))
	) : (
		1
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
