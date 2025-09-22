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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
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
signed short int last_1_var_1_1 = 16;
unsigned char last_1_var_1_8 = 1;
unsigned short int last_1_var_1_17 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = last_1_var_1_17;
 signed long int stepLocal_3 = last_1_var_1_17;
                                            if ( ((stepLocal_3) >= ( ((last_1_var_1_17) / (var_1_7))))) {
                                             if ( ((stepLocal_4) != ( ((((( (((((var_1_3)) > ((last_1_var_1_17))) ? ((var_1_3)) : ((last_1_var_1_17)))))) > ((var_1_5))) ? (( (((((var_1_3)) > ((last_1_var_1_17))) ? ((var_1_3)) : ((last_1_var_1_17)))))) : ((var_1_5))))))) {
                                             var_1_13 = (
    var_1_7
   );
  } else {
                                             var_1_13 = (
    last_1_var_1_17
   );
  }
 } else {
                                             var_1_13 = (
   var_1_3
  );
 }
             if ( (( (- (var_1_28))) < ( (((((var_1_26)) > ((var_1_29))) ? ((var_1_26)) : ((var_1_29))))))) {
              var_1_30 = (
   var_1_29
  );
 }
             if (var_1_25) {
              var_1_35 = (
   var_1_33
  );
 }
             if (var_1_25) {
              var_1_36 = (
               ((
    var_1_37
   ) - (
    var_1_38
   ))
  );
 } else {
              var_1_36 = (
               ((
    var_1_37
   ) - (
                ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))
   ))
  );
 }
             if ( ((var_1_33) <= ( (~ (var_1_34))))) {
              if ( (( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) >= (var_1_38))) {
               var_1_41 = (
                (((((( var_1_42 ) - ( var_1_38 ))) < 0 ) ? -((( var_1_42 ) - ( var_1_38 ))) : ((( var_1_42 ) - ( var_1_38 )))))
   );
  }
 } else {
              var_1_41 = (
   var_1_36
  );
 }
 signed short int stepLocal_7 = var_1_3;
                                if ( ((var_1_4) > (stepLocal_7))) {
                                 var_1_17 = (
                                  ((((( 25 )) > (( (( var_1_13 ) + ( var_1_18 )) ))) ? (( 25 )) : (( (( var_1_13 ) + ( var_1_18 )) ))))
  );
 }
 signed long int stepLocal_6 = last_1_var_1_1;
 unsigned char stepLocal_5 = (( (((((last_1_var_1_1)) < ((8))) ? ((last_1_var_1_1)) : ((8))))) <= (var_1_5));
                                           if ( ((stepLocal_5) || (last_1_var_1_8))) {
                                            if ( ((stepLocal_6) <= (var_1_3))) {
                                             var_1_14 = (
                                              ((
     var_1_15
    ) + (
     var_1_16
    ))
   );
  } else {
                                             var_1_14 = (
    var_1_16
   );
  }
 } else {
                                            var_1_14 = (
   var_1_16
  );
 }
             if ( (( ((((( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) < ((var_1_24))) ? (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : ((var_1_24))))) <= (var_1_32))) {
              var_1_31 = (
   var_1_33
  );
 }
             if ( (( (- (var_1_36))) != (var_1_34))) {
              var_1_40 = (
   var_1_39
  );
 }
 unsigned char stepLocal_2 = var_1_7;
 unsigned char stepLocal_1 = ((var_1_2) && (var_1_10));
                                if ( (( ((49.5f) <= (var_1_14))) && (stepLocal_1))) {
                                if ( ((var_1_13) < (stepLocal_2))) {
                                 var_1_8 = (
                                  ((
     var_1_2
    ) || (
     var_1_11
    ))
   );
  } else {
                                 var_1_8 = (
    var_1_11
   );
  }
 } else {
                                 var_1_8 = (
   var_1_12
  );
 }
             if ( (( (( ((var_1_24) + (25))) % (var_1_27))) < (2))) {
              var_1_26 = (
               ((
                ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
   ) + (
    var_1_29
   ))
  );
 }
                                if ( ((var_1_14) <= (var_1_15))) {
                                 var_1_19 = (
                                  ((
    var_1_12
   ) || (
    var_1_20
   ))
  );
 }
             if ( ((var_1_31) < ( ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) {
              var_1_34 = (
               ((((( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )) > (( var_1_33 ))) ? (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )) : (( var_1_33 ))))
  );
 }
 signed short int stepLocal_0 = var_1_3;
                              if (var_1_19) {
                               var_1_1 = (
                               ((((( var_1_3 )) > (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
  );
 } else {
                               if ( (( ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) >= (stepLocal_0))) {
                                var_1_1 = (
    var_1_5
   );
  }
 }
             if ( ((var_1_22) || (var_1_23))) {
              var_1_21 = (
               ((
                ((
     var_1_24
    ) > (
     -4
    ))
   ) || (
    var_1_25
   ))
  );
 }
                               if ( ((var_1_5) >= (-2))) {
                                var_1_6 = (
                                 ((
    var_1_7
   ) - (
    100
   ))
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
  if ( (( ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) >= (var_1_3))) {
  }
 }
 if ( ((var_1_5) >= (-2))) {
 }
 if ( (( ((49.5f) <= (var_1_14))) && ( ((var_1_2) && (var_1_10))))) {
  if ( ((var_1_13) < (var_1_7))) {
  } else {
  }
 } else {
 }
 if ( ((last_1_var_1_17) >= ( ((last_1_var_1_17) / (var_1_7))))) {
  if ( ((last_1_var_1_17) != ( ((((( (((((var_1_3)) > ((last_1_var_1_17))) ? ((var_1_3)) : ((last_1_var_1_17)))))) > ((var_1_5))) ? (( (((((var_1_3)) > ((last_1_var_1_17))) ? ((var_1_3)) : ((last_1_var_1_17)))))) : ((var_1_5))))))) {
  } else {
  }
 } else {
 }
 if ( (( (( (((((last_1_var_1_1)) < ((8))) ? ((last_1_var_1_1)) : ((8))))) <= (var_1_5))) || (last_1_var_1_8))) {
  if ( ((last_1_var_1_1) <= (var_1_3))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_4) > (var_1_3))) {
 }
 if ( ((var_1_14) <= (var_1_15))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
       var_1_19
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((signed short int) (
                                            ((((( var_1_3 )) > (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
        ))
       ))
      ) : (
                                           ((
                                                 ((
                                                  ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
        ) >= (
         var_1_3
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
          var_1_5
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_5
       ) >= (
        -2
       ))
      ) ? (
                                           ((
        var_1_6
       ) == (
                                            ((unsigned char) (
                                             ((
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
                                          ((
                                               ((
                                                ((
        49.5f
       ) <= (
        var_1_14
       ))
      ) && (
                                                ((
        var_1_2
       ) && (
        var_1_10
       ))
      ))
     ) ? (
                                          ((
                                                ((
        var_1_13
       ) < (
        var_1_7
       ))
      ) ? (
                                           ((
        var_1_8
       ) == (
                                            ((unsigned char) (
                                             ((
          var_1_2
         ) || (
          var_1_11
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_8
       ) == (
                                            ((unsigned char) (
         var_1_11
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_8
      ) == (
                                            ((unsigned char) (
        var_1_12
       ))
      ))
     ))
    ))
   ) && (
                                                     ((
                                                            ((
      last_1_var_1_17
     ) >= (
                                                             ((
       last_1_var_1_17
      ) / (
       var_1_7
      ))
     ))
    ) ? (
                                                      ((
                                                             ((
       last_1_var_1_17
      ) != (
                                                              ((((( ((((( var_1_3 )) > (( last_1_var_1_17 ))) ? (( var_1_3 )) : (( last_1_var_1_17 )))) )) > (( var_1_5 ))) ? (( ((((( var_1_3 )) > (( last_1_var_1_17 ))) ? (( var_1_3 )) : (( last_1_var_1_17 )))) )) : (( var_1_5 ))))
      ))
     ) ? (
                                                       ((
       var_1_13
      ) == (
                                                        ((signed short int) (
        var_1_7
       ))
      ))
     ) : (
                                                       ((
       var_1_13
      ) == (
                                                        ((signed short int) (
        last_1_var_1_17
       ))
      ))
     ))
    ) : (
                                                      ((
      var_1_13
     ) == (
                                                       ((signed short int) (
       var_1_3
      ))
     ))
    ))
   ))
  ) && (
                                                   ((
                                                          ((
                                                           ((
                                                            ((((( last_1_var_1_1 )) < (( 8 ))) ? (( last_1_var_1_1 )) : (( 8 ))))
     ) <= (
      var_1_5
     ))
    ) || (
     last_1_var_1_8
    ))
   ) ? (
                                                    ((
                                                           ((
      last_1_var_1_1
     ) <= (
      var_1_3
     ))
    ) ? (
                                                     ((
      var_1_14
     ) == (
                                                      ((float) (
                                                       ((
        var_1_15
       ) + (
        var_1_16
       ))
      ))
     ))
    ) : (
                                                     ((
      var_1_14
     ) == (
                                                      ((float) (
       var_1_16
      ))
     ))
    ))
   ) : (
                                                    ((
     var_1_14
    ) == (
                                                     ((float) (
      var_1_16
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_4
   ) > (
    var_1_3
   ))
  ) ? (
                                        ((
    var_1_17
   ) == (
                                         ((unsigned short int) (
                                          ((((( 25 )) > (( (( var_1_13 ) + ( var_1_18 )) ))) ? (( 25 )) : (( (( var_1_13 ) + ( var_1_18 )) ))))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_14
  ) <= (
   var_1_15
  ))
 ) ? (
                                       ((
   var_1_19
  ) == (
                                        ((unsigned char) (
                                         ((
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
