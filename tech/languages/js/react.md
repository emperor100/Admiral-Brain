### React Component Life Cycle
<img width="1177" alt="Screenshot 2023-12-01 at 1 53 17 PM" src="https://github.com/emperor100/Admiral-Brain/assets/15110613/4fff7496-a0af-42c1-8971-bc8b4ba67ad3">

<hr>

### Accessing state values inside SetTimeout, SetInterval, and callbacks on event Listener.

This is often due to the asynchronous nature of state updates in React and how closures work in JavaScript.

Example: 
```jsx
import React, { useState, useEffect } from 'react';

function MyComponent() {
  const [count, setCount] = useState(0);

  useEffect(() => {
    const intervalId = setInterval(() => {
      // This won't work as expected!
      setCount(count + 1);
    }, 1000);

    return () => clearInterval(intervalId);
  }, []); // Empty dependency array to run the effect once

  return <div>{count}</div>;
}
```

Resolution: By using the functional form, you guarantee that you're working with the latest state, as React will pass the most recent state to your update function.
```jsx
setCount(prevCount => prevCount + 1);
```
