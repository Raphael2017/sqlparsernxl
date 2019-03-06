-- syntax error
delete * from user where user_name='zhang wu ji';
delete user where user_name='zhang wu ji';
delete from user as u where user_name='zhang wu ji';
delete from user, item where user.user_id = item.item_id and user_name='zhang wu ji';
update item i set i.item_name='jiu gui jiu' where item_id=100;
update item set item_name='jiu gui jiu' where item_id=100;
update item, user set item_name='jiu gui jiu' where item_id=user_id and item_id=100;
select * from order_list limit 0, 50;
