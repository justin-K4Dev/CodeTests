<?php

// set error report
error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('display_startup_errors', TRUE);

// set locale
setlocale(LC_CTYPE, 'ko_KR.UTF-8');

$now = date('Y-m-d H:i:s', time());
echo "Update Date : $now";
echo "<br>";


include_once 'Lib/Utility.php';



function TestFunctionReturn($value) {
	
	if(null == $value) {
		return false;
	}
	
	return true;
}

	$result = TestFunctionReturn( 100 );
	var_dump( $result );
	
	if( false == $result ) {
		echo 'false : '.$result; '<br>';			
	}
	else {
		echo 'true : '.$result; '<br>';			
	}

?>