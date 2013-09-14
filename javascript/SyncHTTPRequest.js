// Synchronous HTTP request with jQuery

var make_request = function(get) {
  var data = '';
  jQuery.ajax({url: get, success: function(html) { data = html; }, async: false});
  return data;
}

console.log(make_request('http://google.com/'));
