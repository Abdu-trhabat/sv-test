// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 2;
unsigned long int var_1_4 = 8;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 1967984875;
float var_1_10 = 256.625;
float var_1_11 = 24.5;
float var_1_12 = 999999.25;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 127.3;
float var_1_16 = 15.8;
double var_1_17 = -0.4;
unsigned long int var_1_18 = 8;
unsigned long int var_1_19 = 2366774301;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 5;
signed char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -128;
signed char var_1_30 = 10;
signed char var_1_31 = -16;
signed long int var_1_32 = 256;
signed short int var_1_34 = -50;
unsigned long int var_1_35 = 4;
signed char var_1_36 = -16;
signed char var_1_37 = -16;
unsigned short int var_1_38 = 16;
unsigned short int var_1_39 = 256;
unsigned short int var_1_40 = 48844;
unsigned short int var_1_41 = 25575;
unsigned short int var_1_42 = 10000;
unsigned long int var_1_43 = 4;
unsigned char var_1_45 = 1;
double var_1_46 = 8.1;
double var_1_47 = 10.4;
double var_1_48 = 1.2;
double var_1_49 = 31.1;
unsigned char var_1_50 = 0;
unsigned long int last_1_var_1_18 = 8;
signed short int last_1_var_1_21 = 5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_6;
                                         if ( (( (- (last_1_var_1_18))) > (stepLocal_0))) {
                                          var_1_8 = (
                                           ((
                                            ((
     var_1_9
    ) - (
     last_1_var_1_21
    ))
   ) - (
    var_1_5
   ))
  );
 }
 unsigned long int stepLocal_2 = var_1_2;
 unsigned char stepLocal_1 = var_1_20;
                               if ( ((var_1_3) > (stepLocal_2))) {
                                var_1_18 = (
                                 ((((( var_1_9 )) < (( (( var_1_19 ) - ( var_1_6 )) ))) ? (( var_1_9 )) : (( (( var_1_19 ) - ( var_1_6 )) ))))
  );
 } else {
                                if ( ((stepLocal_1) || ( ((var_1_9) >= (var_1_8))))) {
                                 var_1_18 = (
    var_1_6
   );
  } else {
                                 var_1_18 = (
    var_1_7
   );
  }
 }
                              if ( ((var_1_2) > ( ((var_1_3) * (var_1_4))))) {
                               var_1_1 = (
                                ((
    var_1_5
   ) - (
                                 ((
     var_1_6
    ) + (
     var_1_7
    ))
   ))
  );
 } else {
                               var_1_1 = (
                                ((((( var_1_7 )) < (( (( ((((16) < 0 ) ? -(16) : (16))) ) + ( var_1_6 )) ))) ? (( var_1_7 )) : (( (( ((((16) < 0 ) ? -(16) : (16))) ) + ( var_1_6 )) ))))
  );
 }
                               if ( ((var_1_18) != ( (((((var_1_6)) < ((var_1_5))) ? ((var_1_6)) : ((var_1_5))))))) {
                               var_1_10 = (
                                ((((( var_1_11 )) > (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
  );
 } else {
                                if ( ((var_1_13) || (var_1_14))) {
                                 var_1_10 = (
    var_1_11
   );
  }
 }
                               if ( (( ((var_1_12) / (var_1_16))) >= (var_1_10))) {
                                var_1_15 = (
                                 ((
    var_1_17
   ) + (
    255.5
   ))
  );
 }
                               var_1_21 = (
                                ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
 );
 unsigned long int stepLocal_3 = var_1_3;
                                if ( ((var_1_21) == (stepLocal_3))) {
                                 if ( (! (var_1_20))) {
                                  var_1_22 = (
                                   ((((( var_1_6 )) > (( (( 5 ) - ( var_1_7 )) ))) ? (( var_1_6 )) : (( (( 5 ) - ( var_1_7 )) ))))
   );
  } else {
                                  var_1_22 = (
                                   ((
     var_1_7
    ) + (
     var_1_23
    ))
   );
  }
 }
            if (var_1_25) {
             var_1_24 = (
   var_1_26
  );
 } else {
             if (var_1_26) {
              var_1_24 = (
    var_1_27
   );
  } else {
              var_1_24 = (
               ((
     var_1_27
    ) || (
     var_1_28
    ))
   );
  }
 }
             if ( (( ((var_1_30) * (var_1_31))) < ( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) {
              if ( ((var_1_32) <= (var_1_30))) {
              var_1_29 = (
    var_1_31
   );
  } else {
               var_1_29 = (
    var_1_30
   );
  }
 } else {
              var_1_29 = (
   var_1_31
  );
 }
             if ( ((var_1_30) < ( (((((var_1_31)) > ((var_1_29))) ? ((var_1_31)) : ((var_1_29))))))) {
              if (var_1_27) {
               var_1_34 = (
    var_1_31
   );
  }
 }
             if ( ((var_1_31) < ( ((var_1_36) / (var_1_37))))) {
              var_1_35 = (
   var_1_32
  );
 } else {
              if ( (( (( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) / (var_1_37))) < (var_1_32))) {
               var_1_35 = (
    var_1_30
   );
  }
 }
             if ( ((var_1_30) > (var_1_31))) {
              if ( ((var_1_28) && (var_1_27))) {
               var_1_38 = (
                ((((( var_1_30 )) < (( var_1_39 ))) ? (( var_1_30 )) : (( var_1_39 ))))
   );
  }
 } else {
              var_1_38 = (
               ((
    var_1_40
   ) - (
                ((
     var_1_41
    ) - (
                 ((
      var_1_42
     ) - (
      var_1_30
     ))
    ))
   ))
  );
 }
             if ( ((var_1_41) >= ( (((((var_1_29)) < ((0))) ? ((var_1_29)) : ((0))))))) {
              var_1_43 = (
               ((((( var_1_38 )) < (( ((((( var_1_41 )) < (( var_1_32 ))) ? (( var_1_41 )) : (( var_1_32 )))) ))) ? (( var_1_38 )) : (( ((((( var_1_41 )) < (( var_1_32 ))) ? (( var_1_41 )) : (( var_1_32 )))) ))))
  );
 }
             if ( (( (( ((var_1_46) * (var_1_47))) + ( ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))))) > (var_1_49))) {
              var_1_45 = (
   var_1_50
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 64);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1073741822);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -128);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -128);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -128);
 assume_abort_if_not(var_1_37 <= 127);
 assume_abort_if_not(var_1_37 != 0);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 8191);
 assume_abort_if_not(var_1_42 <= 16383);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 if ( ((var_1_2) > ( ((var_1_3) * (var_1_4))))) {
 } else {
 }
 if ( (( (- (last_1_var_1_18))) > (var_1_6))) {
 }
 if ( ((var_1_18) != ( (((((var_1_6)) < ((var_1_5))) ? ((var_1_6)) : ((var_1_5))))))) {
 } else {
  if ( ((var_1_13) || (var_1_14))) {
  }
 }
 if ( (( ((var_1_12) / (var_1_16))) >= (var_1_10))) {
 }
 if ( ((var_1_3) > (var_1_2))) {
 } else {
  if ( ((var_1_20) || ( ((var_1_9) >= (var_1_8))))) {
  } else {
  }
 }
 if ( ((var_1_21) == (var_1_3))) {
  if ( (! (var_1_20))) {
  } else {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
                                               ((
        var_1_2
       ) > (
                                                ((
         var_1_3
        ) * (
         var_1_4
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((
          var_1_5
         ) - (
                                              ((
           var_1_6
          ) + (
           var_1_7
          ))
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((((( var_1_7 )) < (( (( ((((16) < 0 ) ? -(16) : (16))) ) + ( var_1_6 )) ))) ? (( var_1_7 )) : (( (( ((((16) < 0 ) ? -(16) : (16))) ) + ( var_1_6 )) ))))
        ))
       ))
      ))
     ) && (
                                                     ((
                                                           ((
                                                            (- (
         last_1_var_1_18
        ))
       ) > (
        var_1_6
       ))
      ) ? (
                                                      ((
        var_1_8
       ) == (
                                                       ((signed long int) (
                                                        ((
                                                         ((
           var_1_9
          ) - (
           last_1_var_1_21
          ))
         ) - (
          var_1_5
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
                                               ((
       var_1_18
      ) != (
                                                ((((( var_1_6 )) < (( var_1_5 ))) ? (( var_1_6 )) : (( var_1_5 ))))
      ))
     ) ? (
                                          ((
       var_1_10
      ) == (
                                           ((float) (
                                            ((((( var_1_11 )) > (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
       ))
      ))
     ) : (
                                           ((
                                                ((
        var_1_13
       ) || (
        var_1_14
       ))
      ) ? (
                                            ((
        var_1_10
       ) == (
                                             ((float) (
         var_1_11
        ))
       ))
      ) : (
       1
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_12
      ) / (
       var_1_16
      ))
     ) >= (
      var_1_10
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((double) (
                                            ((
        var_1_17
       ) + (
        255.5
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_3
    ) > (
     var_1_2
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((unsigned long int) (
                                           ((((( var_1_9 )) < (( (( var_1_19 ) - ( var_1_6 )) ))) ? (( var_1_9 )) : (( (( var_1_19 ) - ( var_1_6 )) ))))
     ))
    ))
   ) : (
                                         ((
                                                ((
      var_1_20
     ) || (
                                                 ((
       var_1_9
      ) >= (
       var_1_8
      ))
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned long int) (
       var_1_6
      ))
     ))
    ) : (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned long int) (
       var_1_7
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_21
  ) == (
                                        ((signed short int) (
                                         ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_21
  ) == (
   var_1_3
  ))
 ) ? (
                                       ((
                                              (! (
    var_1_20
   ))
  ) ? (
                                        ((
    var_1_22
   ) == (
                                         ((signed char) (
                                          ((((( var_1_6 )) > (( (( 5 ) - ( var_1_7 )) ))) ? (( var_1_6 )) : (( (( 5 ) - ( var_1_7 )) ))))
    ))
   ))
  ) : (
                                        ((
    var_1_22
   ) == (
                                         ((signed char) (
                                          ((
      var_1_7
     ) + (
      var_1_23
     ))
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
