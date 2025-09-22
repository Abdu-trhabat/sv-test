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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 100;
signed long int var_1_5 = -128;
unsigned char var_1_6 = 0;
unsigned long int var_1_7 = 32;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 10;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 50;
signed long int var_1_15 = 8;
signed long int var_1_16 = 1155742021;
signed long int var_1_17 = -32;
signed short int var_1_18 = 4;
unsigned short int var_1_20 = 128;
signed short int var_1_23 = -5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 35397;
unsigned short int var_1_27 = 64;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 200;
float var_1_32 = 16.375;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 5;
unsigned char var_1_36 = 1;
unsigned long int var_1_37 = 10;
signed short int var_1_38 = 16;
unsigned char var_1_39 = 10;
unsigned long int last_1_var_1_7 = 32;
unsigned short int last_1_var_1_8 = 4;
signed long int last_1_var_1_15 = 8;
signed long int last_1_var_1_17 = -32;
void initially(void) {
}
void step(void) {
                                          if ( ((last_1_var_1_17) <= (last_1_var_1_15))) {
                                           if ( (! (var_1_6))) {
                                            var_1_8 = (
    var_1_9
   );
  }
 }
                   if (var_1_29) {
                    if ( ((var_1_1) > (128))) {
                     var_1_34 = (
                      ((((( 0 )) < (( ((((( ((((16) < 0 ) ? -(16) : (16))) )) < (( ((((( var_1_33 )) < (( var_1_35 ))) ? (( var_1_33 )) : (( var_1_35 )))) ))) ? (( ((((16) < 0 ) ? -(16) : (16))) )) : (( ((((( var_1_33 )) < (( var_1_35 ))) ? (( var_1_33 )) : (( var_1_35 )))) )))) ))) ? (( 0 )) : (( ((((( ((((16) < 0 ) ? -(16) : (16))) )) < (( ((((( var_1_33 )) < (( var_1_35 ))) ? (( var_1_33 )) : (( var_1_35 )))) ))) ? (( ((((16) < 0 ) ? -(16) : (16))) )) : (( ((((( var_1_33 )) < (( var_1_35 ))) ? (( var_1_33 )) : (( var_1_35 )))) )))) ))))
   );
  }
 }
                   if (var_1_36) {
                    var_1_37 = (
                     ((
                      ((((( var_1_33 )) < (( var_1_1 ))) ? (( var_1_33 )) : (( var_1_1 ))))
   ) + (
                      ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))
   ))
  );
 } else {
                    var_1_37 = (
                     ((((( 256u )) > (( ((((( var_1_35 )) > (( var_1_15 ))) ? (( var_1_35 )) : (( var_1_15 )))) ))) ? (( 256u )) : (( ((((( var_1_35 )) > (( var_1_15 ))) ? (( var_1_35 )) : (( var_1_15 )))) ))))
  );
 }
                   if ( ((var_1_35) >= (var_1_27))) {
                    var_1_38 = (
                     ((
    var_1_33
   ) - (
    var_1_35
   ))
  );
 }
                                           if ( (( ((var_1_12) * (last_1_var_1_7))) > (last_1_var_1_7))) {
                                            var_1_15 = (
                                             ((((( var_1_13 )) > (( var_1_12 ))) ? (( var_1_13 )) : (( var_1_12 ))))
  );
 } else {
                                            var_1_15 = (
                                             ((
                                              ((((( (( var_1_16 ) - ( var_1_9 )) )) > (( last_1_var_1_8 ))) ? (( (( var_1_16 ) - ( var_1_9 )) )) : (( last_1_var_1_8 ))))
   ) - (
    4
   ))
  );
 }
                                if ( ((var_1_15) >= (1))) {
                                 var_1_14 = (
   var_1_13
  );
 } else {
                                 var_1_14 = (
                                  ((
    var_1_13
   ) + (
    5
   ))
  );
 }
                   if ( (( ((var_1_7) / (var_1_20))) < ( ((((( (~ (var_1_15)))) < ((var_1_15))) ? (( (~ (var_1_15)))) : ((var_1_15))))))) {
                    var_1_18 = (
                     ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))
  );
 } else {
                    var_1_18 = (
   var_1_23
  );
 }
                   if ( ((var_1_20) != (var_1_7))) {
                    var_1_24 = (
                     (! (
    0
   ))
  );
 }
                   if ( ((var_1_15) > (var_1_23))) {
                    var_1_36 = (
   var_1_28
  );
 }
                               if ( ((var_1_6) || (var_1_11))) {
                                 var_1_10 = (
                                  ((((( 5 )) > (( var_1_12 ))) ? (( 5 )) : (( var_1_12 ))))
  );
 } else {
                                 var_1_10 = (
                                  ((
    128
   ) - (
    var_1_13
   ))
  );
 }
                                if (var_1_6) {
                                 var_1_17 = (
                                  ((((( ((((( var_1_8 )) < (( var_1_10 ))) ? (( var_1_8 )) : (( var_1_10 )))) )) > (( -25 ))) ? (( ((((( var_1_8 )) < (( var_1_10 ))) ? (( var_1_8 )) : (( var_1_10 )))) )) : (( -25 ))))
  );
 } else {
                                 if ( ((var_1_15) >= (var_1_8))) {
                                  var_1_17 = (
                                   ((((( var_1_10 )) > (( var_1_14 ))) ? (( var_1_10 )) : (( var_1_14 ))))
   );
  } else {
                                  var_1_17 = (
    16
   );
  }
 }
                   if ( (( (((((((((var_1_32)) < ((63.5f))) ? ((var_1_32)) : ((63.5f))))) < 0 ) ? -((((((var_1_32)) < ((63.5f))) ? ((var_1_32)) : ((63.5f))))) : ((((((var_1_32)) < ((63.5f))) ? ((var_1_32)) : ((63.5f)))))))) > (4.5f))) {
                    var_1_31 = (
   var_1_33
  );
 }
                              if ( (( (~ (var_1_8))) < ( (( ((var_1_17) * (var_1_15))) / (var_1_5))))) {
                               if (var_1_6) {
                                var_1_1 = (
                                 ((
     128
    ) - (
     var_1_8
    ))
   );
  } else {
                                var_1_1 = (
    var_1_8
   );
  }
 } else {
                               var_1_1 = (
   var_1_8
  );
 }
                   var_1_39 = (
  var_1_33
 );
 unsigned char stepLocal_0 = ((var_1_8) <= (var_1_5));
                              if ( (( ((var_1_1) < (var_1_15))) || (stepLocal_0))) {
                               if (var_1_6) {
                                var_1_7 = (
    var_1_8
   );
  }
 }
                   if (var_1_24) {
                    if ( (( ((var_1_26) - (var_1_27))) > ( ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) {
                     var_1_25 = (
    var_1_28
   );
  }
 } else {
                    var_1_25 = (
                     ((
    var_1_28
   ) && (
                      ((
     var_1_29
    ) && (
     var_1_30
    ))
   ))
  );
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 1073741822);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 65535);
 assume_abort_if_not(var_1_20 != 0);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -32766);
 assume_abort_if_not(var_1_23 <= 32766);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65535);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 if ( (( (~ (var_1_8))) < ( (( ((var_1_17) * (var_1_15))) / (var_1_5))))) {
  if (var_1_6) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_1) < (var_1_15))) || ( ((var_1_8) <= (var_1_5))))) {
  if (var_1_6) {
  }
 }
 if ( ((last_1_var_1_17) <= (last_1_var_1_15))) {
  if ( (! (var_1_6))) {
  }
 }
 if ( ((var_1_6) || (var_1_11))) {
 } else {
 }
 if ( ((var_1_15) >= (1))) {
 } else {
 }
 if ( (( ((var_1_12) * (last_1_var_1_7))) > (last_1_var_1_7))) {
 } else {
 }
 if (var_1_6) {
 } else {
  if ( ((var_1_15) >= (var_1_8))) {
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
                                                (~ (
         var_1_8
        ))
       ) < (
                                                ((
                                                 ((
          var_1_17
         ) * (
          var_1_15
         ))
        ) / (
         var_1_5
        ))
       ))
      ) ? (
                                           ((
        var_1_6
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((signed long int) (
                                              ((
           128
          ) - (
           var_1_8
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed long int) (
          var_1_8
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((signed long int) (
         var_1_8
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
                                                 ((
         var_1_1
        ) < (
         var_1_15
        ))
       ) || (
                                                 ((
         var_1_8
        ) <= (
         var_1_5
        ))
       ))
      ) ? (
                                           ((
        var_1_6
       ) ? (
                                            ((
         var_1_7
        ) == (
                                             ((unsigned long int) (
          var_1_8
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                                     ((
                                                          ((
       last_1_var_1_17
      ) <= (
       last_1_var_1_15
      ))
     ) ? (
                                                      ((
                                                            (! (
        var_1_6
       ))
      ) ? (
                                                       ((
        var_1_8
       ) == (
                                                        ((unsigned short int) (
         var_1_9
        ))
       ))
      ) : (
       1
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_6
     ) || (
      var_1_11
     ))
    ) ? (
                                          ((
      var_1_10
     ) == (
                                           ((unsigned char) (
                                            ((((( 5 )) > (( var_1_12 ))) ? (( 5 )) : (( var_1_12 ))))
      ))
     ))
    ) : (
                                          ((
      var_1_10
     ) == (
                                           ((unsigned char) (
                                            ((
        128
       ) - (
        var_1_13
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_15
    ) >= (
     1
    ))
   ) ? (
                                         ((
     var_1_14
    ) == (
                                          ((unsigned char) (
      var_1_13
     ))
    ))
   ) : (
                                         ((
     var_1_14
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_13
      ) + (
       5
      ))
     ))
    ))
   ))
  ))
 ) && (
                                                  ((
                                                         ((
                                                          ((
     var_1_12
    ) * (
     last_1_var_1_7
    ))
   ) > (
    last_1_var_1_7
   ))
  ) ? (
                                                   ((
    var_1_15
   ) == (
                                                    ((signed long int) (
                                                     ((((( var_1_13 )) > (( var_1_12 ))) ? (( var_1_13 )) : (( var_1_12 ))))
    ))
   ))
  ) : (
                                                   ((
    var_1_15
   ) == (
                                                    ((signed long int) (
                                                     ((
                                                      ((((( (( var_1_16 ) - ( var_1_9 )) )) > (( last_1_var_1_8 ))) ? (( (( var_1_16 ) - ( var_1_9 )) )) : (( last_1_var_1_8 ))))
     ) - (
      4
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_6
 ) ? (
                                       ((
   var_1_17
  ) == (
                                        ((signed long int) (
                                         ((((( ((((( var_1_8 )) < (( var_1_10 ))) ? (( var_1_8 )) : (( var_1_10 )))) )) > (( -25 ))) ? (( ((((( var_1_8 )) < (( var_1_10 ))) ? (( var_1_8 )) : (( var_1_10 )))) )) : (( -25 ))))
   ))
  ))
 ) : (
                                       ((
                                              ((
    var_1_15
   ) >= (
    var_1_8
   ))
  ) ? (
                                        ((
    var_1_17
   ) == (
                                         ((signed long int) (
                                          ((((( var_1_10 )) > (( var_1_14 ))) ? (( var_1_10 )) : (( var_1_14 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_17
   ) == (
                                         ((signed long int) (
     16
    ))
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
