<?php
	
function custom_changes_views_query_alter(&$view, &$query) {
	if ($_SERVER["REMOTE_ADDR"] == "89.223.47.215"):
	switch($view->name):
		case "job_board_recreate":
			foreach($query->table_queue as $key => $param):
				if (isset($query->table_queue[$key]["join"]->type)):
					//$query->table_queue[$key]["join"]->type = "INNER";
				endif;
			endforeach;
			//print "<pre>";
			//print_r($query->table_queue); die;
		break;
	endswitch;
	endif;
}
