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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Filler_PS_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = 10;
signed long int var_1_2 = -500;
signed char var_1_3 = 1;
signed char var_1_4 = 100;
signed char var_1_5 = 5;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 21451;
unsigned short int var_1_11 = 16;
unsigned char var_1_12 = 8;
unsigned short int var_1_13 = 16;
signed long int var_1_15 = 0;
unsigned short int var_1_16 = 53444;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 1.2;
signed char var_1_20 = 1;
double var_1_21 = 10.5;
double var_1_22 = 0.0;
double var_1_23 = 10.4;
double var_1_24 = 50.5;
unsigned short int var_1_25 = 2;
signed long int var_1_26 = 500;
signed short int var_1_30 = -32;
float var_1_31 = 99.375;
float var_1_33 = 7.5;
unsigned char var_1_34 = 8;
unsigned char var_1_35 = 32;
signed long int var_1_36 = 1;
double var_1_37 = 100.5;
double var_1_38 = 63.25;
double var_1_39 = 16.4;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 1;
unsigned short int var_1_44 = 0;
unsigned short int var_1_45 = 63602;
double var_1_46 = 1.75;
double var_1_47 = 99.25;
double var_1_48 = 32.2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 8;
unsigned char last_1_var_1_12 = 8;
unsigned char last_1_var_1_17 = 0;
unsigned short int last_1_var_1_25 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 296L, 78L) */ if (/* 297L, 54L, 55L) */ ((var_1_17) && (/* 299L, 53L, 57L) */ ((var_1_8) > (/* 301L, 52L, 59L) */ ((var_1_13) / (var_1_30))))))) {
		/* 304L, 76L) */ if (var_1_17) {
			/* 306L, 75L) */ var_1_26 = (
				var_1_13
			);
		}
	}


	// From: CodeObject2
	/* 310L, 138L) */ if (/* 311L, 84L, 85L) */ ((var_1_26) < (var_1_30))) {
		/* 314L, 136L) */ if (/* 315L, 93L, 94L) */ ((var_1_26) <= (var_1_8))) {
			/* 318L, 134L) */ if (/* 319L, 105L, 106L) */ ((/* 320L, 103L, 107L) */ ((/* 321L, 101L, 108L) */ (abs (var_1_8))) * (5))) < (var_1_30))) {
				/* 325L, 132L) */ if (/* 326L, 120L, 121L) */ ((var_1_8) < (var_1_13))) {
					/* 329L, 131L) */ var_1_31 = (
						/* 332L, 130L) */ (abs (
							var_1_33
						))
					);
				}
			}
		}
	}


	// From: CodeObject3
	/* 335L, 145L) */ var_1_34 = (
		var_1_35
	);


	// From: CodeObject4
	/* 340L, 153L) */ var_1_36 = (
		var_1_25
	);


	// From: CodeObject5
	/* 345L, 163L) */ var_1_37 = (
		/* 348L, 162L) */ ((
			var_1_38
		) + (
			var_1_39
		))
	);


	// From: CodeObject6
	/* 364L, 186L) */ if (/* 365L, 170L, 171L) */ ((var_1_31) < (var_1_37))) {
		/* 368L, 185L) */ var_1_40 = (
			/* 371L, 184L) */ (! (
				/* 372L, 183L) */ ((
					/* 373L, 181L) */ ((
						var_1_41
					) && (
						var_1_42
					))
				) && (
					var_1_43
				))
			))
		);
	}


	// From: CodeObject7
	/* 378L, 248L) */ if (/* 379L, 203L, 204L) */ ((/* 380L, 199L, 205L) */ ((25) & (var_1_35))) < (/* 383L, 202L, 208L) */ ((var_1_25) - (25))))) {
		/* 386L, 246L) */ if (/* 387L, 224L, 225L) */ ((/* 388L, 222L, 226L) */ (min (/* 388L, 222L, 226L) */ (/* 389L, 220L, 227L) */ ((var_1_8) & (var_1_36))) , (25)))) > (-64))) {
			/* 394L, 245L) */ var_1_44 = (
				/* 397L, 244L) */ (abs (
					/* 398L, 243L) */ ((
						var_1_45
					) - (
						var_1_35
					))
				))
			);
		}
	}


	// From: CodeObject8
	/* 401L, 294L) */ if (/* 402L, 258L, 259L) */ ((5u) < (/* 404L, 257L, 261L) */ ((var_1_12) ^ (var_1_45))))) {
		/* 407L, 288L) */ if (var_1_17) {
			/* 409L, 283L) */ var_1_46 = (
				/* 412L, 282L) */ (max (
					/* 412L, 282L) */ (
						/* 413L, 280L) */ (min (
							/* 413L, 280L) */ (
								/* 414L, 276L) */ ((
									var_1_47
								) - (
									var_1_48
								))
							) , (
								/* 417L, 279L) */ ((
									var_1_39
								) + (
									var_1_38
								))
							)
						))
					) , (
						var_1_33
					)
				))
			);
		} else {
			/* 421L, 287L) */ var_1_46 = (
				var_1_38
			);
		}
	} else {
		/* 425L, 293L) */ var_1_46 = (
			var_1_33
		);
	}


	// From: Req7Batch21Filler_PS_CO
	/* 20L, 228L, 735L, 755L, 872L, 1032L) */ if (/* 7L, 205L, 206L, 736L, 756L, 859L, 1033L) */ ((/* 4L, 203L, 207L, 737L, 757L, 856L, 1034L) */ ((last_1_var_1_8) < (last_1_var_1_12))) || (last_1_var_1_17))) {
		/* 15L, 223L, 741L, 761L, 867L, 1041L) */ var_1_25 = (
			/* 14L, 222L, 744L, 764L, 866L, 1044L) */ ((
				/* 12L, 220L, 745L, 765L, 864L, 1045L) */ (max (
					/* 12L, 220L, 745L, 765L, 864L, 1045L) */ (
						var_1_11
					) , (
						var_1_9
					)
				))
			) + (
				var_1_7
			))
		);
	} else {
		/* 19L, 227L, 749L, 769L, 871L, 1049L) */ var_1_25 = (
			var_1_7
		);
	}


	// From: Req5Batch21Filler_PS_CO
	/* 993L, 160L, 560L, 577L, 829L) */ if (/* 994L, 137L, 138L, 561L, 578L, 824L) */ ((/* 995L, 133L, 139L, 562L, 579L, 819L) */ (min (/* 995L, 133L, 139L, 562L, 579L, 819L) */ (/* 996L, 131L, 140L, 563L, 580L, 816L) */ (max (/* 996L, 131L, 140L, 563L, 580L, 816L) */ (var_1_11) , (var_1_6)))) , (last_1_var_1_25)))) > (/* 1001L, 136L, 144L, 567L, 584L, 823L) */ ((var_1_3) * (last_1_var_1_25))))) {
		/* 1005L, 159L, 570L, 587L, 828L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: Req4Batch21Filler_PS_CO
	signed long int stepLocal_2 = var_1_15;
	/* 987L, 121L, 418L, 453L) */ if (var_1_17) {
		/* 980L, 113L, 420L, 455L) */ if (/* 961L, 80L, 81L, 421L, 456L) */ ((/* 960L, 78L, 82L, 422L, 457L) */ ((/* 958L, 76L, 83L, 423L, 458L) */ ((var_1_10) + (var_1_9))) << (var_1_5))) < (stepLocal_2))) {
			/* 971L, 104L, 428L, 463L) */ var_1_13 = (
				/* 970L, 103L, 431L, 466L) */ (min (
					/* 970L, 103L, 431L, 466L) */ (
						var_1_7
					) , (
						/* 969L, 102L, 433L, 468L) */ (max (
							/* 969L, 102L, 433L, 468L) */ (
								var_1_25
							) , (
								/* 968L, 101L, 435L, 470L) */ (min (
									/* 968L, 101L, 435L, 470L) */ (
										var_1_9
									) , (
										var_1_6
									)
								))
							)
						))
					)
				))
			);
		} else {
			/* 979L, 112L, 438L, 473L) */ var_1_13 = (
				/* 978L, 111L, 441L, 476L) */ ((
					var_1_16
				) - (
					/* 977L, 110L, 443L, 478L) */ ((
						var_1_9
					) + (
						var_1_11
					))
				))
			);
		}
	} else {
		/* 986L, 120L, 446L, 481L) */ var_1_13 = (
			/* 985L, 119L, 449L, 484L) */ ((
				var_1_16
			) - (
				var_1_10
			))
		);
	}


	// From: Req3Batch21Filler_PS_CO
	unsigned short int stepLocal_1 = var_1_13;
	/* 948L, 67L, 378L, 388L) */ if (/* 942L, 55L, 56L, 379L, 389L) */ ((stepLocal_1) == (var_1_2))) {
		/* 947L, 66L, 382L, 392L) */ var_1_12 = (
			/* 946L, 65L, 385L, 395L) */ (abs (
				var_1_7
			))
		);
	}


	// From: Req1Batch21Filler_PS_CO
	signed long int stepLocal_0 = -1000000;
	/* 919L, 27L, 234L, 255L) */ if (/* 902L, 4L, 5L, 235L, 256L) */ ((var_1_2) >= (stepLocal_0))) {
		/* 908L, 16L, 238L, 259L) */ var_1_1 = (
			/* 907L, 15L, 241L, 262L) */ (min (
				/* 907L, 15L, 241L, 262L) */ (
					var_1_3
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 918L, 26L, 244L, 265L) */ var_1_1 = (
			/* 917L, 25L, 247L, 268L) */ ((
				var_1_5
			) - (
				/* 916L, 24L, 249L, 270L) */ ((
					/* 914L, 22L, 250L, 271L) */ ((
						var_1_6
					) - (
						8
					))
				) + (
					var_1_7
				))
			))
		);
	}


	// From: Req2Batch21Filler_PS_CO
	/* 925L, 44L, 320L, 335L) */ var_1_8 = (
		/* 928L, 43L, 323L, 338L) */ ((
			/* 929L, 39L, 324L, 339L) */ ((
				/* 930L, 37L, 325L, 340L) */ ((
					var_1_7
				) + (
					var_1_6
				))
			) + (
				var_1_9
			))
		) + (
			/* 934L, 42L, 329L, 344L) */ ((
				var_1_10
			) - (
				var_1_11
			))
		))
	);


	// From: Req6Batch21Filler_PS_CO
	signed long int stepLocal_3 = /* 1011L, 173L, 177L, 629L, 646L) */ ((var_1_5) - (var_1_20));
	/* 1027L, 195L, 626L, 643L) */ if (/* 1016L, 174L, 175L, 627L, 644L) */ ((var_1_25) >= (stepLocal_3))) {
		/* 1026L, 194L, 632L, 649L) */ var_1_19 = (
			/* 1025L, 193L, 635L, 652L) */ ((
				/* 1023L, 191L, 636L, 653L) */ (min (
					/* 1023L, 191L, 636L, 653L) */ (
						var_1_21
					) , (
						/* 1022L, 190L, 638L, 655L) */ ((
							var_1_22
						) - (
							var_1_23
						))
					)
				))
			) - (
				var_1_24
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 31);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16383);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	assume_abort_if_not(var_1_30 != 0);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_25 = var_1_25;
}

int property(void) {
	if (/* 430L, 4L, 8L, 277L, 298L, 1055L) */ ((var_1_2) >= (-1000000))) {
	} else {
	}
	if (/* 466L, 55L, 59L, 399L, 409L, 1091L) */ ((var_1_13) == (var_1_2))) {
	}
	if (var_1_17) {
		if (/* 478L, 80L, 88L, 491L, 526L, 1103L) */ ((/* 479L, 78L, 89L, 492L, 527L, 1104L) */ ((/* 480L, 76L, 90L, 493L, 528L, 1105L) */ ((var_1_10) + (var_1_9))) << (var_1_5))) < (var_1_15))) {
		} else {
		}
	} else {
	}
	if (/* 513L, 137L, 147L, 595L, 612L, 843L, 1138L) */ ((/* 514L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (min (/* 514L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (/* 515L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (max (/* 515L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (var_1_11) , (var_1_6)))) , (last_1_var_1_25)))) > (/* 520L, 136L, 153L, 601L, 618L, 842L, 1145L) */ ((var_1_3) * (last_1_var_1_25))))) {
	}
	if (/* 530L, 174L, 180L, 661L, 678L, 1155L) */ ((var_1_25) >= (/* 532L, 173L, 182L, 663L, 680L, 1157L) */ ((var_1_5) - (var_1_20))))) {
	}
	if (/* 548L, 205L, 211L, 776L, 796L, 882L, 1173L, 30L) */ ((/* 549L, 203L, 212L, 777L, 797L, 879L, 1174L, 27L) */ ((last_1_var_1_8) < (last_1_var_1_12))) || (last_1_var_1_17))) {
	} else {
	}
	return /* 574L) */ ((
	/* 573L) */ ((
		/* 572L) */ ((
			/* 571L) */ ((
				/* 570L) */ ((
					/* 569L) */ ((
						/* 429L, 28L, 276L, 297L, 1054L) */ ((
							/* 430L, 4L, 8L, 277L, 298L, 1055L) */ ((
								var_1_2
							) >= (
								-1000000
							))
						) ? (
							/* 433L, 16L, 280L, 301L, 1058L) */ ((
								var_1_1
							) == (
								/* 433L, 16L, 280L, 301L, 1058L) */ ((signed char) (
									/* 436L, 15L, 283L, 304L, 1061L) */ (min (
										/* 436L, 15L, 283L, 304L, 1061L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								))
							))
						) : (
							/* 439L, 26L, 286L, 307L, 1064L) */ ((
								var_1_1
							) == (
								/* 439L, 26L, 286L, 307L, 1064L) */ ((signed char) (
									/* 442L, 25L, 289L, 310L, 1067L) */ ((
										var_1_5
									) - (
										/* 444L, 24L, 291L, 312L, 1069L) */ ((
											/* 445L, 22L, 292L, 313L, 1070L) */ ((
												var_1_6
											) - (
												8
											))
										) + (
											var_1_7
										))
									))
								))
							))
						))
					) && (
						/* 452L, 44L, 350L, 365L, 1077L) */ ((
							var_1_8
						) == (
							/* 452L, 44L, 350L, 365L, 1077L) */ ((unsigned short int) (
								/* 455L, 43L, 353L, 368L, 1080L) */ ((
									/* 456L, 39L, 354L, 369L, 1081L) */ ((
										/* 457L, 37L, 355L, 370L, 1082L) */ ((
											var_1_7
										) + (
											var_1_6
										))
									) + (
										var_1_9
									))
								) + (
									/* 461L, 42L, 359L, 374L, 1086L) */ ((
										var_1_10
									) - (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 465L, 68L, 398L, 408L, 1090L) */ ((
						/* 466L, 55L, 59L, 399L, 409L, 1091L) */ ((
							var_1_13
						) == (
							var_1_2
						))
					) ? (
						/* 469L, 66L, 402L, 412L, 1094L) */ ((
							var_1_12
						) == (
							/* 469L, 66L, 402L, 412L, 1094L) */ ((unsigned char) (
								/* 472L, 65L, 405L, 415L, 1097L) */ (abs (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 475L, 122L, 488L, 523L, 1100L) */ ((
					var_1_17
				) ? (
					/* 477L, 114L, 490L, 525L, 1102L) */ ((
						/* 478L, 80L, 88L, 491L, 526L, 1103L) */ ((
							/* 479L, 78L, 89L, 492L, 527L, 1104L) */ ((
								/* 480L, 76L, 90L, 493L, 528L, 1105L) */ ((
									var_1_10
								) + (
									var_1_9
								))
							) << (
								var_1_5
							))
						) < (
							var_1_15
						))
					) ? (
						/* 485L, 104L, 498L, 533L, 1110L) */ ((
							var_1_13
						) == (
							/* 485L, 104L, 498L, 533L, 1110L) */ ((unsigned short int) (
								/* 488L, 103L, 501L, 536L, 1113L) */ (min (
									/* 488L, 103L, 501L, 536L, 1113L) */ (
										var_1_7
									) , (
										/* 490L, 102L, 503L, 538L, 1115L) */ (max (
											/* 490L, 102L, 503L, 538L, 1115L) */ (
												var_1_25
											) , (
												/* 492L, 101L, 505L, 540L, 1117L) */ (min (
													/* 492L, 101L, 505L, 540L, 1117L) */ (
														var_1_9
													) , (
														var_1_6
													)
												))
											)
										))
									)
								))
							))
						))
					) : (
						/* 495L, 112L, 508L, 543L, 1120L) */ ((
							var_1_13
						) == (
							/* 495L, 112L, 508L, 543L, 1120L) */ ((unsigned short int) (
								/* 498L, 111L, 511L, 546L, 1123L) */ ((
									var_1_16
								) - (
									/* 500L, 110L, 513L, 548L, 1125L) */ ((
										var_1_9
									) + (
										var_1_11
									))
								))
							))
						))
					))
				) : (
					/* 503L, 120L, 516L, 551L, 1128L) */ ((
						var_1_13
					) == (
						/* 503L, 120L, 516L, 551L, 1128L) */ ((unsigned short int) (
							/* 506L, 119L, 519L, 554L, 1131L) */ ((
								var_1_16
							) - (
								var_1_10
							))
						))
					))
				))
			))
		) && (
			/* 512L, 161L, 594L, 611L, 848L, 1137L) */ ((
				/* 513L, 137L, 147L, 595L, 612L, 843L, 1138L) */ ((
					/* 514L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (min (
						/* 514L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (
							/* 515L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (max (
								/* 515L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (
									var_1_11
								) , (
									var_1_6
								)
							))
						) , (
							last_1_var_1_25
						)
					))
				) > (
					/* 520L, 136L, 153L, 601L, 618L, 842L, 1145L) */ ((
						var_1_3
					) * (
						last_1_var_1_25
					))
				))
			) ? (
				/* 524L, 159L, 604L, 621L, 847L, 1149L) */ ((
					var_1_17
				) == (
					/* 524L, 159L, 604L, 621L, 847L, 1149L) */ ((unsigned char) (
						var_1_18
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 529L, 196L, 660L, 677L, 1154L) */ ((
			/* 530L, 174L, 180L, 661L, 678L, 1155L) */ ((
				var_1_25
			) >= (
				/* 532L, 173L, 182L, 663L, 680L, 1157L) */ ((
					var_1_5
				) - (
					var_1_20
				))
			))
		) ? (
			/* 535L, 194L, 666L, 683L, 1160L) */ ((
				var_1_19
			) == (
				/* 535L, 194L, 666L, 683L, 1160L) */ ((double) (
					/* 538L, 193L, 669L, 686L, 1163L) */ ((
						/* 539L, 191L, 670L, 687L, 1164L) */ (min (
							/* 539L, 191L, 670L, 687L, 1164L) */ (
								var_1_21
							) , (
								/* 541L, 190L, 672L, 689L, 1166L) */ ((
									var_1_22
								) - (
									var_1_23
								))
							)
						))
					) - (
						var_1_24
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 547L, 229L, 775L, 795L, 895L, 1172L, 43L) */ ((
		/* 548L, 205L, 211L, 776L, 796L, 882L, 1173L, 30L) */ ((
			/* 549L, 203L, 212L, 777L, 797L, 879L, 1174L, 27L) */ ((
				last_1_var_1_8
			) < (
				last_1_var_1_12
			))
		) || (
			last_1_var_1_17
		))
	) ? (
		/* 556L, 223L, 781L, 801L, 890L, 1181L, 38L) */ ((
			var_1_25
		) == (
			/* 556L, 223L, 781L, 801L, 890L, 1181L, 38L) */ ((unsigned short int) (
				/* 559L, 222L, 784L, 804L, 889L, 1184L, 37L) */ ((
					/* 560L, 220L, 785L, 805L, 887L, 1185L, 35L) */ (max (
						/* 560L, 220L, 785L, 805L, 887L, 1185L, 35L) */ (
							var_1_11
						) , (
							var_1_9
						)
					))
				) + (
					var_1_7
				))
			))
		))
	) : (
		/* 564L, 227L, 789L, 809L, 894L, 1189L, 42L) */ ((
			var_1_25
		) == (
			/* 564L, 227L, 789L, 809L, 894L, 1189L, 42L) */ ((unsigned short int) (
				var_1_7
			))
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
